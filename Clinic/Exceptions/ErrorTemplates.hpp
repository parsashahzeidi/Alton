# pragma once

# include <ETC/Macros.hpp>

// Minimalist class for an error template
# define DEF_ERROR_TEMPLATE(classname, baseclassname, message)\
class classname: public baseclassname {\
public:\
	classname()\
	{\
		_message = Conversions::str_to_text(message);\
	}\
}

namespace Alton
{
	namespace Clinic
	{
		namespace Exceptions
		{
			// THE Base class
			class BaseException
			{
			public:
				text_t _message;

				BaseException():
						_message(U"[Internal] Base exception raised")
				{ }
			};

			// Errors inheriting from BaseException
			DEF_ERROR_TEMPLATE(BaseInternalException,								BaseException,											"[Internal] Base exception raised");
				DEF_ERROR_TEMPLATE(BaseHelperException,									BaseInternalException,									"[Internal] Base exception raised");
					DEF_ERROR_TEMPLATE(StillOperatingError,									BaseHelperException,									"Attempted to end an operation in the middle of an operation");
					DEF_ERROR_TEMPLATE(NotOperatingYetError,								BaseHelperException,									"Attempted to access an operation's data without an operation");

				DEF_ERROR_TEMPLATE(BasePlaceHolderInternalValueUseException,			BaseInternalException,									"[Internal] Base exception raised");
					DEF_ERROR_TEMPLATE(PlaceHolderTokenException,							BasePlaceHolderInternalValueUseException, 				"Attempted to pass a Token::null_token to __append");

				DEF_ERROR_TEMPLATE(InternalMathDomainException,							BaseInternalException,									"General math domain exception");
			
			DEF_ERROR_TEMPLATE(BaseExternalException,								BaseException,											"[Internal] Base exception raised");
				DEF_ERROR_TEMPLATE(BaseArgumentException,								BaseExternalException,									"[Internal] Base exception raised");
					DEF_ERROR_TEMPLATE(InvalidArgumentException,							BaseArgumentException,									"Unrecognised argument");
					DEF_ERROR_TEMPLATE(InvalidArgumentValueException,						BaseArgumentException,									"Can't evaluate argument");

				DEF_ERROR_TEMPLATE(BaseUnhandeledException, 							BaseExternalException, 										"Severe external unhandeled exception");  // Not a base exception.
					DEF_ERROR_TEMPLATE(IntegerSyntaxUnhandeledException,					BaseUnhandeledException, 							"Integer processor raised an unhandeled exception");

				DEF_ERROR_TEMPLATE(BaseCodeException,									BaseExternalException,									"[Internal] Base exception raised");
					DEF_ERROR_TEMPLATE(BaseSyntaxException,									BaseCodeException,										"[Internal] Base exception raised");
						DEF_ERROR_TEMPLATE(UnrecognisedTokenException,							BaseSyntaxException,									"Unrecognized token");

						DEF_ERROR_TEMPLATE(MisplacedButValidSyntaxEception,						BaseSyntaxException,									"Misplaced syntax");
							DEF_ERROR_TEMPLATE(MisplacedDoBlock,									MisplacedButValidSyntaxEception,						"Unexpected ':' token ( in miniscope conditions )");

						DEF_ERROR_TEMPLATE(BaseNewlineSyntaxError,								BaseSyntaxException,									"[Internal] Base exception raised");
							DEF_ERROR_TEMPLATE(DentUnmatchException,								BaseNewlineSyntaxError,									"Unexpected Indent");
							DEF_ERROR_TEMPLATE(DentMatchException,									BaseNewlineSyntaxError,									"No indent where expected");
							DEF_ERROR_TEMPLATE(OutDentUnmatchException,								BaseNewlineSyntaxError,									"Outdent doesn't match any previous dent level");

						DEF_ERROR_TEMPLATE(MiniScopeLeftOpenException,							BaseSyntaxException,									"Miniscope left open");
							DEF_ERROR_TEMPLATE(RoundBracketMiniScopeLeftOpenException,				MiniScopeLeftOpenException,								"Expected '}'");
							DEF_ERROR_TEMPLATE(SquareBracketMiniScopeLeftOpenException,				MiniScopeLeftOpenException,								"Expected ']'");
							DEF_ERROR_TEMPLATE(ParanthesisMiniScopeLeftOpenException,				MiniScopeLeftOpenException,								"Expected ')'");
						
					DEF_ERROR_TEMPLATE(InvalidHeaderException,								BaseCodeException,										"Can't evaluate the header");
						DEF_ERROR_TEMPLATE(InvalidHeaderIdentifierException,					InvalidHeaderException,									"Unrecognised header identifier");
						DEF_ERROR_TEMPLATE(InvalidHeaderFunction,								InvalidHeaderException,									"Invalid header function");
		}
	}
}
