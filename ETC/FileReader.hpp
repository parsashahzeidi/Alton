# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	inline namespace Tools
	{
		class FileReader
		{
			// --- Head
		private:
			// --- Body
		public:
			/**
			 * @brief Reads an input file.
			*/
			static text_t read(std::filesystem::path path)
			{
				// --- Head ---
				std::string out;
				char cache[1024];
				std::fstream t(path);

				// --- Body ---
				// Raising an error if the filepath is obscure or has no length
				if (
					!std::filesystem::exists(path) ||
					std::filesystem::is_directory(path) ||
					std::filesystem::is_empty(path)
				){
					ErrorHandling::raise_arg
					(
						ErrorHandling::Exceptions::InvalidParamValueException(),
						str_to_text("-i=") + path.u32string()
					);
				}
				
				// Putting a null character at the end of cache
				cache[1023] = '\0';

				// While we havent reached the end of t
				while (t)
				{
					// Clearing cache; just in case we have a read shorter than 1KiB
					for (natural_num_t i = 0; i < 1023; i++)
						cache[i] = 0;
					
					t.read(cache, 1023);
					out += cache;
				}

				return str_to_text(out);
			}
			// --- CTOR ~ DTOR
		public:
			FileReader(){ }
			~FileReader(){ }
		};
	}
}