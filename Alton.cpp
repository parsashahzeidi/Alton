# include <Instructions/AnalyzedArguments/ArgumentProcessor.hpp>
# include <Instructions/LexedTree/Lexer.hpp>
# include <Instructions/AbstractSyntaxTree/Parser.hpp>
# include <ETC/AltonContainers/BaseTreeContainer.hpp>

int main(int argc, char *argv[]){
	// --- Head ---
	std::string tmp = "ello";
	Alton::TreeNode<std::string> a(tmp);

	Alton::ArgProcessor::ArgProcessor argp(argv, argc);
	Alton::ArgProcessor::arg_chart_t args = argp.process();

	Alton::Lexer::Lexer lxr
	(
		Alton::Tools::FileReader::read
		(
			args[Alton::ArgProcessor::arg_id::input_file]
		)
	);
	
	Alton::Lexer::lxm_vec tokens = lxr.lex();

	Alton::Parser::Parser parser = tokens;
	Alton::Types::cont_t<Alton::Parser::ast_t> tree = parser.parse();

	// --- Body ---
	// -- Tree container test --
	std::cout << "\n\n\033[1m\t[TestRun]\ttree_container_test()\033[0m\n\n";
	tmp = "enui on dere?";
	a.set_left(tmp);
	a.get_left().set_left(tmp += " Yello!\n");
	std::cout << a.get_left().get_left().item;
	std::cout.flush();

	// -- Lexing test --
	std::cout << "\n\n\033[1m\t[TestRun]\tlexing_test()\033[0m\n\n";
	
	std::cout << lxr.lxm_vec_to_str(tokens).c_str();

	// -- Parsing test --
	std::cout << "\n\n\033[1m\t[TestRun]\tparsing_test()\033[0m\n\n";

	/*
	alfie::ByteCode bc;
	
	if (args.is_bytecode){
		alfie::statement_vector code = app.code;

		alfie::Lexer lexer(code);
		alfie::lexed_tree lexed_tree = code.lex();

		alfie::Parser parser(lexed_tree);
		alfie::ast ast = parser.ast();

		alfie::Actionizer actionizer(ast);
		bc = actionizer.actionize();
	}
	else {
		bc = app.code;
	}

	// --- Body ---
	bc.run();
	*/
	Alton::ErrorHandling::_delete_setup();
	exit(0);
}
