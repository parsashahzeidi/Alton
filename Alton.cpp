# include <Instructions/AnalyzedArguments/ArgumentProcessor.hpp>
# include <Instructions/LexedTree/Lexer.hpp>

int main(int argc, char *argv[]){
	// --- Head ---
	Alton::ArgProcessor::ArgProcessor argp(argv, argc);
	Alton::ArgProcessor::arg_chart_t args = argp.process();

	Alton::Lexer::Lexer lxr
	(
		Alton::FileReader::read
		(
			args[Alton::ArgProcessor::arg_id::input_file]
		)
	);

	Alton::Lexer::lxm_vec tokens = lxr.lex();

	// --- Body ---
	for (Alton::Types::natural_num_t i = 0; i < tokens.size(); i++)
	{
		std::cout << '[' << Alton::Conversions::text_to_str(tokens[i].enumeration) << "] ";
	}
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
	return 0;
}
