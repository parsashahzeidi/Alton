# include <ArgProcessor/ArgumentProcessor.hpp>
# include <Lexer/Lexer.hpp>
# include <Parser/Parser.hpp>
# include <Types/BaseTreeContainer.hpp>

int main(int argc, char *argv[]){
	// --- Head ---
	std::string tmp = "ello";
	Alton::TreeNode<std::string> a(tmp);

	Alton::ArgProcessor::ArgProcessor argp(argv, argc);
	Alton::ArgProcessor::arg_state_t args = argp.process();

	Alton::Lexer::Lexer lxr(U"");
	
	Alton::Lexer::lxm_vec tokens;
/*
	Alton::Parser::Parser parser = tokens;
	Alton::Types::cont_t<Alton::Parser::ast_t> tree = parser.parse();
*/

	// --- Body ---
	// -- Header --
	std::cout
			<< "Alton, " << Alton::Conversions::text_to_str(ALTON_RELEASE_NAME)									// The Release Name
			<< " Version 0x" << Alton::Conversions::text_to_str(
				Alton::Tools::left_fill(Alton::Conversions::to_hex(ALTON_MAJOR_VERSION), U'0', 2))					// The Major version
			<< '.' << Alton::Conversions::text_to_str(
				Alton::Tools::left_fill(Alton::Conversions::to_hex(ALFIE_STANDARD_COMPLIANCE), U'0', 2))			// The Standard
			<< '.' << Alton::Conversions::text_to_str(
				Alton::Tools::left_fill(Alton::Conversions::to_hex(ALTON_COMMIT_NUMBER), U'0', 2)) << "; "			// The Commit Number

			<< "Built on "
			<< ALTON_BUILD_TIME_YEAR << '/'																			// The Build Year
			<< ALTON_BUILD_TIME_MONTH << '/'																		// The Build Month
			<< ALTON_BUILD_TIME_DAY << ' '																			// The Build Day

			<< ALTON_BUILD_TIME_HOUR << ':'																			// The Build Hour
			<< ALTON_BUILD_TIME_MINUTE << "':"																		// The Build Minute
			<< ALTON_BUILD_TIME_SECOND << "\"\n";																	// The Build Second
	std::cout.flush();

	// -- Lexing test --
	std::cout << "\n\033[1m[Tests]\t The Lexing Test.\033[0m\n";
	
	lxr = Alton::Lexer::Lexer
	(
		Alton::Tools::read_file
		(
			args[Alton::ArgProcessor::arg_id::input_file]
		)
	);

	tokens = lxr.lex();

	std::cout << Alton::Conversions::text_to_str(lxr.lxm_vec_to_str(tokens));

	// -- Parsing test --
	std::cout << "\n\033[1m\t[Tests]\t The Parsing Test\033[0m\n";

	exit(0);
}
