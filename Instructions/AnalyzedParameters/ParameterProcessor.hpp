# pragma once

# include <stdint.h>
# include <filesystem>
# include <vector>

uint64_t arg_c = 0;
char** arg_v = nullptr;

# define initialize_parameters() \
    arg_c = argc;\
    arg_v = (char**) argv


namespace alfie{
	class parameters{
		// --- Head
	public:
		std::filesystem::path inpath = std::filesystem::path("./temp.lfi");
		std::filesystem::path outpath;
		std::vector<std::filesystem::path> includepaths = {};
		bool is_bytecode = false;

	private:

		// --- Body
	public:
		bool check_parameters(){
			// TODO: ^
			return 0;
		}

		// --- CTOR ~ DTOR
	public:
		// --- Constructor ---
		// -- Default constructor --
		parameters(){ }

		// --- Destructor ---
		// -- Default destructor --
		~parameters(){ }
	};


	class ParamProcessor{
		// --- Head
	public:
		std::vector<std::filesystem::path> inpaths;
	private:

		// --- Body
	public:
        parameters process(){
            parameters out;

            // TODO: ^
			return out;
        }

		// --- CTOR ~ DTOR
	public:
		// --- Constructor ---
		// -- Default constructor --
		ParamProcessor(){ }

		// --- Destructor ---
		// -- Default destructor --
		~ParamProcessor(){ }
	};
}
