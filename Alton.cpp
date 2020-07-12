# include <ETC/VersionData.hpp>
# include <ETC/AltonFunctionDetect.hpp>
# include <Conversions/StringConvert.hpp>

# include <Tools/TextFill.hpp>
# include <Tools/FileReader.hpp>

# include <ArgumentProcessor/ArgumentProcessor.hpp>
# include <Lexer/Lexer.hpp>
# include <Parser/Parser.hpp>

int main(int argc, char *argv[])
{
	// --- Head ---
	// -- Argument Processing Test --
	using Alton::ArgumentProcessor::ArgumentProcessor;
	using Alton::ArgumentProcessor::ArgumentState;
	using Alton::ArgumentProcessor::ArgumentID;

	ArgumentProcessor arg_processor({}, 0);
	ArgumentState arg_state;

	// -- File reading Test --
	using Alton::Types::Text;
	using Alton::Tools::read_file;

	Text code;

	// -- Lexing Test --
	using Alton::Lexer::Lexer;
	using Alton::Lexer::LexemeList;

	Lexer lexer(U"");
	LexemeList lex;

	// -- Parsing Test --
	using Alton::Parser::Parser;
	
	Parser parser;

	// -- Adittional usings --
	using Alton::Tools::left_fill;

	using Alton::Conversions::text_to_str;
	using Alton::Conversions::base2_to_basen;

	using Alton::Clinic::say;
	using Alton::Clinic::Component;
	using Alton::Clinic::add_scope;
	using Alton::Clinic::exit_scope;
	using Alton::Clinic::print_header;
	using Alton::Clinic::ANSIColourCode;
	using Alton::Clinic::ANSIColourStrength;

	// --- Body ---
	// -- Header --
	print_header();

	// -- Argument Processing test --
	say
	(
		Component::main_run,
		U"The Argument Processing Test."
	); add_scope();

	arg_processor = ArgumentProcessor(argv, argc);
	arg_state = arg_processor.process();

	say
	(
		Component::main_run,
		U"Successful!",
		ANSIColourStrength::neutral_ansi_colour_strength,
		ANSIColourCode::ansi_colour_green
	); exit_scope();

	// -- File Reading test --
	say
	(
		Component::main_run,
		U"The File Reading test"
	); add_scope();

	code = read_file
	(
		arg_state[ArgumentID::input_file]
	);

	say
	(
		Component::main_run,
		U"Successful!",
		ANSIColourStrength::neutral_ansi_colour_strength,
		ANSIColourCode::ansi_colour_green
	); exit_scope();

	// -- Lexing test --
	say
	(
		Component::main_run,
		U"The Lexing Test."
	); add_scope();

	lexer = Lexer(code);
	lex = lexer.lex();

	say
	(
		Component::main_run,
		U"Successful!",
		ANSIColourStrength::neutral_ansi_colour_strength,
		ANSIColourCode::ansi_colour_green
	); exit_scope();


	// -- Parsing test --
	say
	(
		Component::main_run,
		U"The Parsing Test"
	); add_scope ();

	parser = Parser(lex);
	// NOTE: This is deleted because the parser returns an
	//	Alton::Parser::AST::NamespaceInternals now instead.
	// TODO: Get the AST or the bytecode.
	/* parse_tree =*/ parser.parse();

	say
	(
		Component::main_run,
		U"Successful!",
		ANSIColourStrength::neutral_ansi_colour_strength,
		ANSIColourCode::ansi_colour_green
	); exit_scope ();

	// NOTE:Using terminate instead of return helps keep track of memory
	//	errors.
	Alton::Clinic::terminate(0);

	// If the termination fails.
	Alton::Clinic::raise_internal
	(
		Alton::Clinic::Exceptions::BaseAbsolutelyUnexpectedException(),
		__FILE__, ALTON_FUNCTION_DETECT, __LINE__
	);
	return 1;
}
