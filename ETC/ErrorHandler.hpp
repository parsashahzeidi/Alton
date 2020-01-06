# pragma once

# include <string>
# include <iostream>


namespace alfie{
	/**
	 * @brief Gets line:char from a string and index
	*/
	std::string _get_index(std::string in, uint64_t ptr){
		// --- Head ---
		uint64_t line = 0;
		uint64_t l_in = 0;

		// --- Body ---
		for (uint64_t it = 0; it < ptr; it++){
			if (in[it] != '\n')
				l_in++;
			else{
				line++;
				l_in = 0;
			}
		}
		return std::to_string(line) + ":" + std::to_string(l_in);
	}

	/**
	 * @brief Raises an error and exits.
	*/
	void _raise(std::string err, int64_t code){
		std::cerr << "Error: " << err << '\n';
		exit(code);
	}

	/**
	 * @brief Raises an error like err at line:char
	*/
	void raise_pos(std::string err, std::string file, uint64_t index){
		_raise(
			err + " at " + _get_index(file, index) + ".\n\tTerminating...",
			1
		);
	}

	/**
	 * @brief Raises an internal error.
	*/
	void raise_internal(std::string err){
		_raise(
			((std::string) "Internal Error: ") + err + "\n\tTerminating...",
			69
		);
	}
}
