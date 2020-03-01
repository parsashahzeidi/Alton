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
	// -- Lexing test --
	std::cout << "\n\n\033[1m\t[TestRun]\tlexing_test()\033[0m\n\n";
	
	lxr = Alton::Lexer::Lexer
	(
		Alton::Tools::FileReader::read
		(
			args[Alton::ArgProcessor::arg_id::input_file]
		)
	);

	tokens = lxr.lex();

	std::cout << Alton::Conversions::text_to_str(lxr.lxm_vec_to_str(tokens));

	// -- Parsing test --
	std::cout << "\n\n\033[1m\t[TestRun]\tparsing_test()\033[0m\n\n";

	exit(0);
}
