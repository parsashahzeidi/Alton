# include <ETC/VersionData.hpp>
# include <Conversions/StringConvert.hpp>

# include <Tools/TextFill.hpp>
# include <Tools/FileReader.hpp>

# include <ArgumentProcessor/ArgumentProcessor.hpp>
# include <Lexer/Lexer.hpp>
// # include <Parser/Parser.hpp>

int main(int argc, char *argv[])
{
	// --- Head ---
	// -- Argument Processing Test --
	using Alton::ArgumentProcessor::ArgumentProcessor;
	using Alton::ArgumentProcessor::ArgumentState;
	using Alton::ArgumentProcessor::ArgumentID;

	ArgumentProcessor arg_processor({}, 0);
	ArgumentState arg_state;
	
	// -- Lexing Test --
	using Alton::Lexer::Lexer;
	using Alton::Lexer::LexemeList;
	
	Lexer lexer(U"");
	LexemeList lex;

/*	// -- Parsing Test --
	using Alton::Parser::Parser;
	using Alton::Parser::ParseTree;

	Parser parser = Parser(lex);
	ParseTree parse_tree;  */

	// -- Adittional usings --
	using Alton::Tools::left_fill;
	using Alton::Tools::read_file;

	using Alton::Conversions::text_to_str;
	using Alton::Conversions::base2_to_basen;

	using Alton::Clinic::say;
	using Alton::Clinic::Component;
	using Alton::Clinic::ansi_term_colour;
	using Alton::Clinic::print_header;
	using Alton::Clinic::ANSIColourCode;
	using Alton::Clinic::ANSIColourStrength;

	using Alton::Types::Text;

	// --- Body ---
	// -- Header --
	print_header();

	// -- Argument Processing test --
	// - Print text in bold -
	say(Component::main_run,
		U"#1 - The Argument Processing Test."
	);

	arg_processor = ArgumentProcessor(argv, argc);
	arg_state = arg_processor.process();

	// -- Lexing test --
	say(Component::main_run,
		U"Successful!"
	);

	say(Component::main_run,
		U"#2 - The Lexing Test."
	);

	lexer = Lexer
	(
		read_file
		(
			arg_state[ArgumentID::input_file]
		)
	);

	lex = lexer.lex();

	say(Component::main_run,
		lexer.lxm_vec_to_text(lex)
	);

	say(Component::main_run,
		U"Successful!"
	);
/*
	// -- Parsing test --
	say(Component::main_run,
		U"#3 - The Parsing Test"
	);
	
	parser = Parser(lex);
	parse_tree = parser.parse();

	say(Component::main_run,
		U"Successful!"
	);
	*/

	/**
	 * NOTE:
		Using terminate instead of return helps keep track of 
		memory errors.
	*/
	Alton::Clinic::terminate(0);
	
	// If the termination fails.
	Alton::Clinic::raise_internal
	(
		Alton::Clinic::Exceptions::BaseAbsolutelyUnexpectedException()
		, __FILE__, __LINE__
	);
	return 1;
}
