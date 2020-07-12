# pragma once

# include <ETC/BareboneMacros.hpp>

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
				Text _message;

				BaseException():
						_message(U"[Internal] Base exception raised")
				{ }
			};

			// Errors inheriting from BaseException
			DEF_ERROR_TEMPLATE(BaseInternalException,								BaseException,											"[Internal] Base exception raised");
				DEF_ERROR_TEMPLATE(BaseHelperExclusiveException,						BaseInternalException,									"[Internal] Base exception raised");
					DEF_ERROR_TEMPLATE(StillOperatingError,									BaseHelperExclusiveException,							"Attempted to end an operation in the middle of an operation");
					DEF_ERROR_TEMPLATE(NotOperatingYetError,								BaseHelperExclusiveException,							"Attempted to access an operation's data without an operation");

				DEF_ERROR_TEMPLATE(BaseAbsolutelyUnexpectedException,					BaseInternalException,									"The Most obscure of errors has happened");

				DEF_ERROR_TEMPLATE(BasePlaceHolderInternalValueUseException,			BaseInternalException,									"[Internal] Base exception raised");
					DEF_ERROR_TEMPLATE(PlaceHolderTokenException,							BasePlaceHolderInternalValueUseException, 				"Attempted to pass a Token::null_token to __append");
					DEF_ERROR_TEMPLATE(InvalidPlaceHolderException,							BasePlaceHolderInternalValueUseException,				"Invalid placeholder");

				DEF_ERROR_TEMPLATE(BaseInvalidInternalValueException,					BaseInternalException,									"[Internal] Base exception raised");
					DEF_ERROR_TEMPLATE(InvalidMiniscopeOpeningPlaceholder,					BaseInvalidInternalValueException,						"Expected a valid miniscope item");
					DEF_ERROR_TEMPLATE(UnexistentSwitchCaseException,						BaseInvalidInternalValueException,						"No existing case found in switch");

				DEF_ERROR_TEMPLATE(InternalMathDomainException,							BaseInternalException,									"Internal math domain violation occured");
			
			DEF_ERROR_TEMPLATE(BaseExternalException,								BaseException,											"[Internal] Base exception raised");
				DEF_ERROR_TEMPLATE(BaseArgumentException,								BaseExternalException,									"[Internal] Base exception raised");
					DEF_ERROR_TEMPLATE(InvalidArgumentException,							BaseArgumentException,									"Unrecognised argument");
					DEF_ERROR_TEMPLATE(InvalidArgumentValueException,						BaseArgumentException,									"Can't evaluate argument");

				DEF_ERROR_TEMPLATE(BaseUnhandeledException, 							BaseExternalException, 									"Severe external unhandeled exception");  // Not a base exception.
					DEF_ERROR_TEMPLATE(IntegerSyntaxUnhandeledException,					BaseUnhandeledException, 								"Integer processor raised an unhandeled exception");

				DEF_ERROR_TEMPLATE(BaseCodeException,									BaseExternalException,									"[Internal] Base exception raised");
					DEF_ERROR_TEMPLATE(BaseSyntaxException,									BaseCodeException,										"[Internal] Base exception raised");
						DEF_ERROR_TEMPLATE(UnrecognisedTokenException,							BaseSyntaxException,									"Unrecognized Token");
						DEF_ERROR_TEMPLATE(UnrecognisedSyntaxException,							BaseSyntaxException,									"Unrecognised syntax");
						DEF_ERROR_TEMPLATE(MisplacedButValidSyntaxEception,						BaseSyntaxException,									"Misplaced syntax");
							DEF_ERROR_TEMPLATE(MisplacedDoBlockException,							MisplacedButValidSyntaxEception,						"Unexpected ':' Token ( in miniscope conditions )");

						DEF_ERROR_TEMPLATE(BaseNewlineSyntaxError,								BaseSyntaxException,									"[Internal] Base exception raised");
							DEF_ERROR_TEMPLATE(DentUnmatchException,								BaseNewlineSyntaxError,									"Unexpected Indent");
							DEF_ERROR_TEMPLATE(DentMatchException,									BaseNewlineSyntaxError,									"No indent where expected");
							DEF_ERROR_TEMPLATE(OutDentUnmatchException,								BaseNewlineSyntaxError,									"Outdent doesn't match any previous dent level");

						DEF_ERROR_TEMPLATE(MiniScopeLeftOpenException,							BaseSyntaxException,									"Miniscope left open");
							DEF_ERROR_TEMPLATE(RoundBracketMiniScopeLeftOpenException,				MiniScopeLeftOpenException,								"Expected '}'");
							DEF_ERROR_TEMPLATE(SquareBracketMiniScopeLeftOpenException,				MiniScopeLeftOpenException,								"Expected ']'");
							DEF_ERROR_TEMPLATE(ParanthesisMiniScopeLeftOpenException,				MiniScopeLeftOpenException,								"Expected ')'");
							DEF_ERROR_TEMPLATE(ExcessMiniScopeClosingException,						MiniScopeLeftOpenException,								"Unmatched miniscope closing");
						
					DEF_ERROR_TEMPLATE(InvalidHeaderException,								BaseCodeException,										"Can't evaluate the header");
						DEF_ERROR_TEMPLATE(InvalidHeaderIdentifierException,					InvalidHeaderException,									"Unrecognised header identifier");
						DEF_ERROR_TEMPLATE(InvalidHeaderFunctionException,						InvalidHeaderException,									"Invalid header function");
		}
	}
}
