# pragma once

# include <ETC/Macros.hpp>
# include <ETC/StringConvert.hpp>

# define DEF_ERROR_TEMPLATE(classname, baseclassname, message)\
class classname: public baseclassname {\
public:\
	classname()\
	{\
		_message = str_to_text(message);\
	}\
}

namespace Alton
{
	namespace ErrorHandling
	{
		namespace Exceptions
		{
			// THE Base class
			class BaseException
			{
			public:
				text_t _message;

				BaseException():
						_message(U"Base exception used in code.")
				{ }
			};

			// Errors inheriting from BaseException
			DEF_ERROR_TEMPLATE(BaseInternalException, BaseException, "Base exception used in code.");
				DEF_ERROR_TEMPLATE(BaseHelperException, BaseInternalException, "Base exception used in code.");
					DEF_ERROR_TEMPLATE(StillOperatingError, BaseHelperException, "Attempted to end an operation in the middle of an operation");
					DEF_ERROR_TEMPLATE(NotOperatingYetError, BaseHelperException, "Attempted to access an operation's data without an operation");

					DEF_ERROR_TEMPLATE(InvalidInputCgroupException, BaseHelperException, "Base exception used in code.");
						DEF_ERROR_TEMPLATE(InputNotAScopeItemException, InvalidInputCgroupException, "Character not expected to be a MiniScope item");
							DEF_ERROR_TEMPLATE(InputNotAScopeOpeningException, InputNotAScopeItemException, "Character not expected to be a MiniScope opening");
							DEF_ERROR_TEMPLATE(InputNotAScopeClosingException, InputNotAScopeItemException, "Character not expected to be a MiniScope closing");

				DEF_ERROR_TEMPLATE(BasePlaceHolderInternalValueUseException, BaseInternalException, "Base exception used in code.");
					DEF_ERROR_TEMPLATE(PlaceHolderTokenException, BasePlaceHolderInternalValueUseException, "Attempted to pass a Token::null_token to __append");
			
			DEF_ERROR_TEMPLATE(BaseExternalException, BaseException, "Base exception used in code.");
				DEF_ERROR_TEMPLATE(BaseArgumentException, BaseExternalException, "Base exception used in code.");
					DEF_ERROR_TEMPLATE(InvalidArgumentException, BaseArgumentException, "Unrecognised argument");
					DEF_ERROR_TEMPLATE(InvalidArgumentValueException, BaseArgumentException, "Can't evaluate argument");

				DEF_ERROR_TEMPLATE(BaseCodeException, BaseExternalException, "Base exception used in code.");
					DEF_ERROR_TEMPLATE(InvalidSyntaxException, BaseCodeException, "Unrecognised syntax");
					DEF_ERROR_TEMPLATE(DentUnmatchException, BaseCodeException, "Unexpected Indent");
					DEF_ERROR_TEMPLATE(DentMatchException, BaseCodeException, "No indent where expected");
					DEF_ERROR_TEMPLATE(OutDentUnmatchException, BaseCodeException, "Outdent doesn't match any previous dent level");
					DEF_ERROR_TEMPLATE(InvalidEscapeSequence, BaseCodeException, "Unrecognised escape sequence");
					DEF_ERROR_TEMPLATE(MiniScopeLeftOpenException, BaseCodeException, "Scope unintentionally left open");
		}
	}
}
