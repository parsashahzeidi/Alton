# include <Alton/Instructions/AnalyzedParameters/ParameterProcessor.hpp>
# include <Alton/Instructions/PreProcessedCode/PreProcessor.hpp>
//# include <Alton/Instructions/LexedTree/Lexer.hpp>
//# include <Alton/Instructions/ParsedTree/Parser.hpp>
//# include <Alton/Instructions/ActionTree/Actionizer.hpp>

# include <iostream>

int main(int argc, char* argv[]){
	// --- Head ---
	initialize_parameters();
	alfie::ParamProcessor paramp;
	alfie::parameters params = paramp.process();
	/*
	alfie::ByteCode bc;
	
	if (params.is_bytecode){
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
	std::cout << "PP: " << app.process();
	return 0;
}
