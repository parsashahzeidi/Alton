# pragma once

# include <ETC/Macros.hpp>
# include <ETC/StringConvert.hpp>

# define DEF_ERROR_TEMPLATE(classname, baseclassname, message)\
class classname: public baseclassname {\
public:\
	text_t _message;\
\
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

				BaseException()
				{
					_message = str_to_text("Base exception used in code.");
				}
			};

			// Errors inheriting from BaseException
			DEF_ERROR_TEMPLATE(BaseInternalException, BaseException, "Base exception used in code.");
				DEF_ERROR_TEMPLATE(BaseHelperException, BaseInternalException, "Base exception used in code.");
					DEF_ERROR_TEMPLATE(StillOperatingError, BaseHelperException, "Attempted to end an operation in the middle of an operation");
					DEF_ERROR_TEMPLATE(NotOperatingYetError, BaseHelperException, "Attempted to access an operation's data without an operation");
			
			DEF_ERROR_TEMPLATE(BaseExternalException, BaseException, "Base exception used in code.");
				DEF_ERROR_TEMPLATE(BaseParamException, BaseExternalException, "Base exception used in code.");
					DEF_ERROR_TEMPLATE(InvalidParamException, BaseParamException, "Unrecognised parameter");
					DEF_ERROR_TEMPLATE(InvalidParamValueException, BaseParamException, "Can't evaluate parameter");

				DEF_ERROR_TEMPLATE(BaseCodeException, BaseExternalException, "Base exception used in code.");
					DEF_ERROR_TEMPLATE(InvalidSyntaxException, BaseCodeException, "Unrecognised syntax");
					DEF_ERROR_TEMPLATE(DentUnmatchException, BaseCodeException, "Unexpected Indent");
					DEF_ERROR_TEMPLATE(DentMatchException, BaseCodeException, "No indent where expected");
					DEF_ERROR_TEMPLATE(OutDentUnmatchException, BaseCodeException, "Outdent doesn't match any previous dent level");
					DEF_ERROR_TEMPLATE(InvalidEscapeSequence, BaseCodeException, "Unrecognised escape sequence");
			
		}
	}
}
