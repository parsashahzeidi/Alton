# include <ETC/BareboneMacros.hpp>
# include <Parser/ParseState.hpp>


namespace Alton
{
	namespace Parser
	{
		ParseState::ParseState ()
		{ }

		ParseState::ParseState (Natural state_number, Natural _position_in_code):
				i (state_number),
				position_in_code (_position_in_code)
		{ }

		ParseState::~ParseState ()
		{ }
	}  // namesp Parser
}  // namesp Alton
