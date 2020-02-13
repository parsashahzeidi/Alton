# pragma once

# include <ETC/Macros.hpp>
# include <ETC/BaseHelper.hpp>

namespace Alton
{
	namespace Lexer
	{
		// --- Lexem typedefs ---------------------
		// -- Tokens
		enum token
		{
			null_token,
			statement_end,
			dent,
			id,
			constant_integer,
			constant_string,
			filter,
			scope_opening,
			scope_closing,
			oper
		};

		struct _lexem
		{
			token token_type = token::null_token;
			natural_num_t position_in_code = 0;
			text_t enumeration = U"";

			natural_num_t value = 0;
		};
		typedef  _lexem lexem_t;
		typedef cont_t<lexem_t> lxm_vec;

		// -- Characer groups
		// All indexes for the character database
		// Note: Make sure that count is the last item
		enum cgroup
		{
			// Indexes
			numbers,  // Numbers
			characters,  // Characters
			operators,  // Operators
			whitespaces,  // Whitespaces / indents
			newlines,  // Newlines
			comments,  // Comments
			scope_openings,  // Scope openings
			scope_closings,  // Scope closings
			specials,  // Special characters ( like backslash )
			invalids,  // Invalid characters
			string_quotes,	// String quotes

			// Not a char group
			count
		};

		// An index structure for the character database
		struct _cgroup_index
		{
			cgroup g = cgroup::numbers;  // The 'g' stands for 'group'
			utfchar_t c = 0;  // The 'i' stands for 'character'
		};
		typedef  _cgroup_index cgroupin;

		// A structure for miniscopes / paranthesis / brackets / ...
		struct _miniscope
		{
			utfchar_t opening = '\0';
			utfchar_t estimated_closing = '\0';
		};
		typedef _miniscope miniscope_t;
		

		// --- LexemHelper class ------------------
		class LexemHelper: public BaseHelper<utfchar_t, text_t>
		{
			// --- Head
		private:
			// Note:
			//	No privates! Remember; this is a 'Helper'.

		public:
			bool _expecting_indent = false;
			cont_t<natural_num_t> previous_dents;
			cont_t<miniscope_t> open_miniscopes;
			lexem_t cache;
			lxm_vec tokenized;

			// --- Body
			// Incompatible with our tactic.
			void advance_word() = delete;
			void advance() = delete;

		private:
			// Note:
			//	No privates! Remember; this is a 'Helper'.
			
		public:
			/**
			 * @brief Appends a lexem to the tokenized array
			 * @arg in Input lexem
			*/
			void __append(lexem_t &in)
			{
				// Checking if 'in' is a null_token lexem
				if (in.token_type == token::null_token)
					ErrorHandling::raise_internal
					(
						ErrorHandling::Exceptions::PlaceHolderTokenException()
					);

				tokenized.push_back(in);
			}

			/**
			 * @brief Advances without saving
			*/
			void virtually_advance() override
			{
				_require_operation();

				it++;

				// Skipping those pesky windows newlines
				if ((curr(0) == '\r') && (curr(1) == '\n'))
					it++;

				// Skipping Escapes.
				if (curr(0) == '\\')
				{
					// -- \\\n --
					if (curr(1) == '\n')
						it++;
					else if (curr(1) == '\r' && curr(2) == '\n')
						it += 2;

					// -- Unrecognised escape code --
					else 
						ErrorHandling::raise_pos
						(
							ErrorHandling::Exceptions::InvalidEscapeSequence(),
							out, it
						);
				}
				
				if (it > out.size())
					_exit_operation();
			}

			/**
			 * @brief Advances w/o Escape sequences.
			*/
			void virtually_advance(num_t i) override
			{
				_require_operation();

				it += i;

				if (it >= out.size())
					_exit_operation();
			}

			// --- CTOR ~ DTOR
		public:
			LexemHelper(text_t code):
					BaseHelper(code)
			{
				previous_dents.push_back(0);
			}
		};
	}
}
