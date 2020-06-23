# States

## State 0

### Notes

This state is a state-0, it doesn't have any parents. This state has 20 children, all of which are mentioned below.

* State **1**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **8**, as a result of shifting **keyword_var**
* State **9**, as a result of shifting **keyword_goto**
* State **10**, as a result of shifting **keyword_graphic**
* State **11**, as a result of shifting **keyword_interface**
* State **12**, as a result of shifting **start**
* State **13**, as a result of shifting **module_space**
* State **14**, as a result of shifting **module_item**
* State **15**, as a result of shifting **interface**
* State **16**, as a result of shifting **declare**
* State **17**, as a result of shifting **type**
* State **18**, as a result of shifting **location**
* State **19**, as a result of shifting **shader**
* State **20**, as a result of shifting **module**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | - | - | - | - | S1 | G5 | G5 | G5 | G5 | G5 | G5 | - | - | G5 | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* s0 -> **·** start, ending
* start -> **·** module_space, ending
* module_space -> **·** module_item module_space, ending rbrack
* module_space -> **·** module_item, ending rbrack
* module_item -> **·** interface, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module_item -> **·** shader, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module_item -> **·** module, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* interface -> **·** declare defargs code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* shader -> **·** keyword_graphic declare defargs code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module -> **·** identifier lbrack module_space rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module -> **·** identifier lbrack rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* declare -> **·** type identifier, lparen oper_union rparen oper_assign
* declare -> **·** type keyword_underscore, lparen oper_union rparen oper_assign
* declare -> **·** keyword_var identifier, lparen oper_union rparen oper_assign
* declare -> **·** keyword_var keyword_underscore, lparen oper_union rparen oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 1

### Notes

This state preceeds an **identifier** symbol.

The state has 3 parents, namely the ones below.

* State **0**
* State **14**
* State **21**

This state also has 2 children, details are written below.

* State **21**, as a result of shifting **lbrack**
* State **22**, as a result of shifting **oper_dot**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | R2 | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* module -> identifier **·** lbrack module_space rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module -> identifier **·** lbrack rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* location -> identifier **·** oper_dot location, identifier keyword_underscore
* location -> identifier **·**, identifier keyword_underscore

## State 2

### Notes

This state preceeds a **keyword_shader** symbol.

The state has 19 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **40**
* State **44**
* State **74**
* State **75**
* State **90**
* State **92**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* type -> keyword_shader **·**, identifier keyword_underscore

## State 3

### Notes

This state preceeds a **keyword_float** symbol.

The state has 19 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **40**
* State **44**
* State **74**
* State **75**
* State **90**
* State **92**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* type -> keyword_float **·**, identifier keyword_underscore

## State 4

### Notes

This state preceeds a **keyword_bool** symbol.

The state has 19 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **40**
* State **44**
* State **74**
* State **75**
* State **90**
* State **92**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* type -> keyword_bool **·**, identifier keyword_underscore

## State 5

### Notes

This state preceeds a **keyword_void** symbol.

The state has 19 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **40**
* State **44**
* State **74**
* State **75**
* State **90**
* State **92**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* type -> keyword_void **·**, identifier keyword_underscore

## State 6

### Notes

This state preceeds a **keyword_int** symbol.

The state has 19 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **40**
* State **44**
* State **74**
* State **75**
* State **90**
* State **92**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* type -> keyword_int **·**, identifier keyword_underscore

## State 7

### Notes

This state preceeds a **keyword_nat** symbol.

The state has 19 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **40**
* State **44**
* State **74**
* State **75**
* State **90**
* State **92**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* type -> keyword_nat **·**, identifier keyword_underscore

## State 8

### Notes

This state preceeds a **keyword_var** symbol.

The state has 7 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **44**
* State **92**

This state also has 2 children, details are written below.

* State **23**, as a result of shifting **identifier**
* State **24**, as a result of shifting **keyword_underscore**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* declare -> keyword_var **·** identifier, lparen oper_union rparen oper_assign
* declare -> keyword_var **·** keyword_underscore, lparen oper_union rparen oper_assign

## State 9

### Notes

This state preceeds a **keyword_goto** symbol.

The state has 7 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **44**
* State **92**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* type -> keyword_goto **·**, identifier keyword_underscore

## State 10

### Notes

This state preceeds a **keyword_graphic** symbol.

The state has 3 parents, namely the ones below.

* State **0**
* State **14**
* State **21**

This state also has 13 children, details are written below.

* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **8**, as a result of shifting **keyword_var**
* State **9**, as a result of shifting **keyword_goto**
* State **11**, as a result of shifting **keyword_interface**
* State **26**, as a result of shifting **declare**
* State **17**, as a result of shifting **type**
* State **18**, as a result of shifting **location**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | - | S1 | - | - | - | - | - | - | - | - | - | - | G5 | - | - | G5 | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* shader -> keyword_graphic **·** declare defargs code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* declare -> **·** type identifier, lparen
* declare -> **·** type keyword_underscore, lparen
* declare -> **·** keyword_var identifier, lparen
* declare -> **·** keyword_var keyword_underscore, lparen
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 11

### Notes

This state preceeds a **keyword_interface** symbol.

The state has 19 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **40**
* State **44**
* State **74**
* State **75**
* State **90**
* State **92**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* type -> keyword_interface **·**, identifier keyword_underscore

## State 12

### Notes

This state preceeds a **start** symbol.

The state has one parent state, the one below.

* State **0**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | A3 |

### Items

* s0 -> start **·**, ending

## State 13

### Notes

This state preceeds a **module_space** symbol.

The state has one parent state, the one below.

* State **0**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* start -> module_space **·**, ending

## State 14

### Notes

This state preceeds a **module_item** symbol.

The state has 3 parents, namely the ones below.

* State **0**
* State **14**
* State **21**

This state also has 19 children, details are written below.

* State **1**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **8**, as a result of shifting **keyword_var**
* State **9**, as a result of shifting **keyword_goto**
* State **10**, as a result of shifting **keyword_graphic**
* State **11**, as a result of shifting **keyword_interface**
* State **27**, as a result of shifting **module_space**
* State **14**, as a result of shifting **module_item**
* State **15**, as a result of shifting **interface**
* State **16**, as a result of shifting **declare**
* State **17**, as a result of shifting **type**
* State **18**, as a result of shifting **location**
* State **19**, as a result of shifting **shader**
* State **20**, as a result of shifting **module**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | - | - | - | - | - | G5 | G5 | G5 | G5 | G5 | G5 | - | - | G5 | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* module_space -> module_item **·** module_space, ending rbrack
* module_space -> module_item **·**, ending rbrack
* module_space -> **·** module_item module_space, ending rbrack
* module_space -> **·** module_item, ending rbrack
* module_item -> **·** interface, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module_item -> **·** shader, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module_item -> **·** module, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* interface -> **·** declare defargs code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* shader -> **·** keyword_graphic declare defargs code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module -> **·** identifier lbrack module_space rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module -> **·** identifier lbrack rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* declare -> **·** type identifier, lparen
* declare -> **·** type keyword_underscore, lparen
* declare -> **·** keyword_var identifier, lparen
* declare -> **·** keyword_var keyword_underscore, lparen
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 15

### Notes

This state preceeds an **interface** symbol.

The state has 3 parents, namely the ones below.

* State **0**
* State **14**
* State **21**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* module_item -> interface **·**, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack

## State 16

### Notes

This state preceeds a **declare** symbol.

The state has 3 parents, namely the ones below.

* State **0**
* State **14**
* State **21**

This state also has 2 children, details are written below.

* State **28**, as a result of shifting **lparen**
* State **29**, as a result of shifting **defargs**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* interface -> declare **·** defargs code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* defargs -> **·** lparen defunion rparen, lscope
* defargs -> **·** lparen rparen, lscope

## State 17

### Notes

This state preceeds a **type** symbol.

The state has 7 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **44**
* State **92**

This state also has 2 children, details are written below.

* State **30**, as a result of shifting **identifier**
* State **31**, as a result of shifting **keyword_underscore**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* declare -> type **·** identifier, lparen oper_union rparen oper_assign
* declare -> type **·** keyword_underscore, lparen oper_union rparen oper_assign

## State 18

### Notes

This state preceeds a **location** symbol.

The state has 19 parents, namely the ones below.

* State **0**
* State **10**
* State **14**
* State **21**
* State **28**
* State **40**
* State **44**
* State **74**
* State **75**
* State **90**
* State **92**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* type -> location **·**, identifier keyword_underscore

## State 19

### Notes

This state preceeds a **shader** symbol.

The state has 3 parents, namely the ones below.

* State **0**
* State **14**
* State **21**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* module_item -> shader **·**, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack

## State 20

### Notes

This state preceeds a **module** symbol.

The state has 3 parents, namely the ones below.

* State **0**
* State **14**
* State **21**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* module_item -> module **·**, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack

## State 21

### Notes

This state preceeds a **lbrack** symbol.

The state has one parent state, the one below.

* State **1**

This state also has 20 children, details are written below.

* State **32**, as a result of shifting **rbrack**
* State **1**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **8**, as a result of shifting **keyword_var**
* State **9**, as a result of shifting **keyword_goto**
* State **10**, as a result of shifting **keyword_graphic**
* State **11**, as a result of shifting **keyword_interface**
* State **33**, as a result of shifting **module_space**
* State **14**, as a result of shifting **module_item**
* State **15**, as a result of shifting **interface**
* State **16**, as a result of shifting **declare**
* State **17**, as a result of shifting **type**
* State **18**, as a result of shifting **location**
* State **19**, as a result of shifting **shader**
* State **20**, as a result of shifting **module**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | - | - | - | - | - | G5 | G5 | G5 | G5 | G5 | G5 | - | - | G5 | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* module -> identifier lbrack **·** module_space rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module -> identifier lbrack **·** rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* module_space -> **·** module_item module_space, rbrack
* module_space -> **·** module_item, rbrack
* module_item -> **·** interface, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic rbrack
* module_item -> **·** shader, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic rbrack
* module_item -> **·** module, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic rbrack
* interface -> **·** declare defargs code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic rbrack
* shader -> **·** keyword_graphic declare defargs code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic rbrack
* module -> **·** identifier lbrack module_space rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic rbrack
* module -> **·** identifier lbrack rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic rbrack
* declare -> **·** type identifier, lparen
* declare -> **·** type keyword_underscore, lparen
* declare -> **·** keyword_var identifier, lparen
* declare -> **·** keyword_var keyword_underscore, lparen
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 22

### Notes

This state preceeds an **oper_dot** symbol.

The state has 2 parents, namely the ones below.

* State **1**
* State **25**

This state also has 2 children, details are written below.

* State **25**, as a result of shifting **identifier**
* State **34**, as a result of shifting **location**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* location -> identifier oper_dot **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 23

### Notes

This state preceeds an **identifier** symbol.

The state has one parent state, the one below.

* State **8**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* declare -> keyword_var identifier **·**, lparen oper_union rparen oper_assign

## State 24

### Notes

This state preceeds a **keyword_underscore** symbol.

The state has one parent state, the one below.

* State **8**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* declare -> keyword_var keyword_underscore **·**, lparen oper_union rparen oper_assign

## State 25

### Notes

This state preceeds an **identifier** symbol.

The state has 17 parents, namely the ones below.

* State **10**
* State **22**
* State **28**
* State **40**
* State **44**
* State **74**
* State **75**
* State **90**
* State **92**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state also has one child state, details are written below.

* State **22**, as a result of shifting **oper_dot**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* location -> identifier **·** oper_dot location, identifier keyword_underscore
* location -> identifier **·**, identifier keyword_underscore

## State 26

### Notes

This state preceeds a **declare** symbol.

The state has one parent state, the one below.

* State **10**

This state also has 2 children, details are written below.

* State **28**, as a result of shifting **lparen**
* State **35**, as a result of shifting **defargs**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* shader -> keyword_graphic declare **·** defargs code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* defargs -> **·** lparen defunion rparen, lscope
* defargs -> **·** lparen rparen, lscope

## State 27

### Notes

This state preceeds a **module_space** symbol.

The state has one parent state, the one below.

* State **14**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* module_space -> module_item module_space **·**, ending rbrack

## State 28

### Notes

This state preceeds a **lparen** symbol.

The state has 2 parents, namely the ones below.

* State **16**
* State **26**

This state also has 16 children, details are written below.

* State **36**, as a result of shifting **rparen**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **8**, as a result of shifting **keyword_var**
* State **9**, as a result of shifting **keyword_goto**
* State **11**, as a result of shifting **keyword_interface**
* State **37**, as a result of shifting **declare**
* State **17**, as a result of shifting **type**
* State **38**, as a result of shifting **defunion**
* State **39**, as a result of shifting **defassignunion**
* State **18**, as a result of shifting **location**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | - | S1 | - | - | - | - | - | - | - | - | - | - | G5 | - | - | G5 | G5 | G5 | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defargs -> lparen **·** defunion rparen, lscope
* defargs -> lparen **·** rparen, lscope
* defunion -> **·** declare oper_union defunion, rparen
* defunion -> **·** declare, rparen
* defunion -> **·** defassignunion, rparen
* declare -> **·** type identifier, oper_union rparen oper_assign
* declare -> **·** type keyword_underscore, oper_union rparen oper_assign
* declare -> **·** keyword_var identifier, oper_union rparen oper_assign
* declare -> **·** keyword_var keyword_underscore, oper_union rparen oper_assign
* defassignunion -> **·** declare oper_assign item oper_union defassignunion, rparen
* defassignunion -> **·** declare oper_assign item, rparen
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 29

### Notes

This state preceeds a **defargs** symbol.

The state has one parent state, the one below.

* State **16**

This state also has 2 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **41**, as a result of shifting **code**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* interface -> declare defargs **·** code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* code -> **·** lscope stmtunion rscope, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack statement_end rscope keyword_else
* code -> **·** lscope rscope, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack statement_end rscope keyword_else

## State 30

### Notes

This state preceeds an **identifier** symbol.

The state has one parent state, the one below.

* State **17**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* declare -> type identifier **·**, lparen oper_union rparen oper_assign

## State 31

### Notes

This state preceeds a **keyword_underscore** symbol.

The state has one parent state, the one below.

* State **17**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* declare -> type keyword_underscore **·**, lparen oper_union rparen oper_assign

## State 32

### Notes

This state preceeds a **rbrack** symbol.

The state has one parent state, the one below.

* State **21**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* module -> identifier lbrack rbrack **·**, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack

## State 33

### Notes

This state preceeds a **module_space** symbol.

The state has one parent state, the one below.

* State **21**

This state also has one child state, details are written below.

* State **42**, as a result of shifting **rbrack**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* module -> identifier lbrack module_space **·** rbrack, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack

## State 34

### Notes

This state preceeds a **location** symbol.

The state has one parent state, the one below.

* State **22**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* location -> identifier oper_dot location **·**, identifier keyword_underscore

## State 35

### Notes

This state preceeds a **defargs** symbol.

The state has one parent state, the one below.

* State **26**

This state also has 2 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **43**, as a result of shifting **code**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* shader -> keyword_graphic declare defargs **·** code, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* code -> **·** lscope stmtunion rscope, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack
* code -> **·** lscope rscope, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack

## State 36

### Notes

This state preceeds a **rparen** symbol.

The state has one parent state, the one below.

* State **28**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defargs -> lparen rparen **·**, lscope

## State 37

### Notes

This state preceeds a **declare** symbol.

The state has 2 parents, namely the ones below.

* State **28**
* State **44**

This state also has 2 children, details are written below.

* State **44**, as a result of shifting **oper_union**
* State **45**, as a result of shifting **oper_assign**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defunion -> declare **·** oper_union defunion, rparen
* defunion -> declare **·**, rparen
* defassignunion -> declare **·** oper_assign item oper_union defassignunion, rparen
* defassignunion -> declare **·** oper_assign item, rparen

## State 38

### Notes

This state preceeds a **defunion** symbol.

The state has one parent state, the one below.

* State **28**

This state also has one child state, details are written below.

* State **46**, as a result of shifting **rparen**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defargs -> lparen defunion **·** rparen, lscope

## State 39

### Notes

This state preceeds a **defassignunion** symbol.

The state has 2 parents, namely the ones below.

* State **28**
* State **44**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defunion -> defassignunion **·**, rparen

## State 40

### Notes

This state preceeds a **lscope** symbol.

The state has 12 parents, namely the ones below.

* State **29**
* State **35**
* State **74**
* State **75**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state also has 28 children, details are written below.

* State **47**, as a result of shifting **rscope**
* State **25**, as a result of shifting **identifier**
* State **48**, as a result of shifting **statement_end**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **52**, as a result of shifting **keyword_while**
* State **53**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **56**, as a result of shifting **stmtunion**
* State **57**, as a result of shifting **stmt**
* State **58**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **64**, as a result of shifting **if**
* State **65**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | S1 | S1 | - | - | S1 | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* code -> lscope **·** stmtunion rscope, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack statement_end rscope keyword_else
* code -> lscope **·** rscope, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack statement_end rscope keyword_else
* stmtunion -> **·** stmt statement_end stmtunion, rscope
* stmtunion -> **·** stmt, rscope
* stmt -> **·** if, statement_end rscope
* stmt -> **·** if_else, statement_end rscope
* stmt -> **·** simple_stmt, statement_end rscope
* stmt -> **·** statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg code keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_while single_arg if_else, statement_end rscope keyword_else
* simple_stmt -> **·** goto_stmt, statement_end rscope keyword_else
* simple_stmt -> **·** seg_stmt, statement_end rscope keyword_else
* simple_stmt -> **·** vardef, statement_end rscope keyword_else
* simple_stmt -> **·** assign, statement_end rscope keyword_else
* simple_stmt -> **·** item, statement_end rscope keyword_else
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end rscope keyword_else
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end rscope keyword_else
* vardef -> **·** declare_union, statement_end rscope keyword_else
* vardef -> **·** declare_union oper_assign item, statement_end rscope keyword_else
* assign -> **·** item assign_oper item, statement_end rscope keyword_else
* item -> **·** expression, statement_end rscope oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end rscope oper_assign keyword_else
* declare_union -> **·** keyword_var sid_union, statement_end rscope oper_assign keyword_else
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 41

### Notes

This state preceeds a **code** symbol.

The state has one parent state, the one below.

* State **29**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* interface -> declare defargs code **·**, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack

## State 42

### Notes

This state preceeds a **rbrack** symbol.

The state has one parent state, the one below.

* State **33**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* module -> identifier lbrack module_space rbrack **·**, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack

## State 43

### Notes

This state preceeds a **code** symbol.

The state has one parent state, the one below.

* State **35**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* shader -> keyword_graphic declare defargs code **·**, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack

## State 44

### Notes

This state preceeds an **oper_union** symbol.

The state has one parent state, the one below.

* State **37**

This state also has 15 children, details are written below.

* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **8**, as a result of shifting **keyword_var**
* State **9**, as a result of shifting **keyword_goto**
* State **11**, as a result of shifting **keyword_interface**
* State **37**, as a result of shifting **declare**
* State **17**, as a result of shifting **type**
* State **66**, as a result of shifting **defunion**
* State **39**, as a result of shifting **defassignunion**
* State **18**, as a result of shifting **location**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | - | S1 | - | - | - | - | - | - | - | - | - | - | G5 | - | - | G5 | G5 | G5 | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defunion -> declare oper_union **·** defunion, rparen
* defunion -> **·** declare oper_union defunion, rparen
* defunion -> **·** declare, rparen
* defunion -> **·** defassignunion, rparen
* declare -> **·** type identifier, oper_union rparen oper_assign
* declare -> **·** type keyword_underscore, oper_union rparen oper_assign
* declare -> **·** keyword_var identifier, oper_union rparen oper_assign
* declare -> **·** keyword_var keyword_underscore, oper_union rparen oper_assign
* defassignunion -> **·** declare oper_assign item oper_union defassignunion, rparen
* defassignunion -> **·** declare oper_assign item, rparen
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 45

### Notes

This state preceeds an **oper_assign** symbol.

The state has 2 parents, namely the ones below.

* State **37**
* State **126**

This state also has one child state, details are written below.

* State **67**, as a result of shifting **item**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defassignunion -> declare oper_assign **·** item oper_union defassignunion, rparen
* defassignunion -> declare oper_assign **·** item, rparen
* item -> **·** expression, oper_union rparen

## State 46

### Notes

This state preceeds a **rparen** symbol.

The state has one parent state, the one below.

* State **38**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defargs -> lparen defunion rparen **·**, lscope

## State 47

### Notes

This state preceeds a **rscope** symbol.

The state has one parent state, the one below.

* State **40**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | R2 | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | - | R2 | R2 | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* code -> lscope rscope **·**, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack statement_end rscope keyword_else

## State 48

### Notes

This state preceeds a **statement_end** symbol.

The state has 2 parents, namely the ones below.

* State **40**
* State **90**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* stmt -> statement_end **·**, statement_end rscope

## State 49

### Notes

This state preceeds a **keyword_var** symbol.

The state has 12 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state also has 3 children, details are written below.

* State **68**, as a result of shifting **identifier**
* State **69**, as a result of shifting **keyword_underscore**
* State **70**, as a result of shifting **sid_union**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* declare_union -> keyword_var **·** sid_union, statement_end rscope oper_assign keyword_else
* sid_union -> **·** identifier sid_union, statement_end rscope oper_assign keyword_else
* sid_union -> **·** identifier, statement_end rscope oper_assign keyword_else
* sid_union -> **·** keyword_underscore sid_union, statement_end rscope oper_assign keyword_else
* sid_union -> **·** keyword_underscore, statement_end rscope oper_assign keyword_else

## State 50

### Notes

This state preceeds a **keyword_goto** symbol.

The state has 12 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state also has one child state, details are written below.

* State **71**, as a result of shifting **oper_colon**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* goto_stmt -> keyword_goto **·** oper_colon identifier, statement_end rscope keyword_else
* type -> keyword_goto **·**, identifier keyword_underscore

## State 51

### Notes

This state preceeds a **keyword_seg** symbol.

The state has 12 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state also has one child state, details are written below.

* State **72**, as a result of shifting **oper_colon**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* seg_stmt -> keyword_seg **·** oper_colon identifier, statement_end rscope keyword_else

## State 52

### Notes

This state preceeds a **keyword_while** symbol.

The state has 7 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **162**

This state also has 2 children, details are written below.

* State **73**, as a result of shifting **lparen**
* State **74**, as a result of shifting **single_arg**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_while **·** single_arg if, statement_end rscope
* if -> keyword_while **·** single_arg simple_stmt, statement_end rscope
* if -> keyword_while **·** single_arg code, statement_end rscope
* if_else -> keyword_while **·** single_arg if_else, statement_end rscope keyword_else
* single_arg -> **·** lparen paren_oper rparen lparen item rparen, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope

## State 53

### Notes

This state preceeds a **keyword_if** symbol.

The state has 7 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **162**

This state also has 2 children, details are written below.

* State **73**, as a result of shifting **lparen**
* State **75**, as a result of shifting **single_arg**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if **·** single_arg if, statement_end rscope
* if -> keyword_if **·** single_arg simple_stmt statement_end, statement_end rscope
* if -> keyword_if **·** single_arg code, statement_end rscope
* if -> keyword_if **·** single_arg if_else keyword_else if, statement_end rscope
* if -> keyword_if **·** single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> keyword_if **·** single_arg code keyword_else if, statement_end rscope
* if -> keyword_if **·** single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if **·** single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if **·** single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if **·** single_arg if_else keyword_else code, statement_end rscope
* if -> keyword_if **·** single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> keyword_if **·** single_arg code keyword_else code, statement_end rscope
* if_else -> keyword_if **·** single_arg if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> keyword_if **·** single_arg simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> keyword_if **·** single_arg code keyword_else if_else, statement_end rscope keyword_else
* single_arg -> **·** lparen paren_oper rparen lparen item rparen, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope

## State 54

### Notes

This state preceeds a **type** symbol.

The state has 12 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state also has 3 children, details are written below.

* State **68**, as a result of shifting **identifier**
* State **69**, as a result of shifting **keyword_underscore**
* State **76**, as a result of shifting **sid_union**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* declare_union -> type **·** sid_union, statement_end rscope oper_assign keyword_else
* sid_union -> **·** identifier sid_union, statement_end rscope oper_assign keyword_else
* sid_union -> **·** identifier, statement_end rscope oper_assign keyword_else
* sid_union -> **·** keyword_underscore sid_union, statement_end rscope oper_assign keyword_else
* sid_union -> **·** keyword_underscore, statement_end rscope oper_assign keyword_else

## State 55

### Notes

This state preceeds an **item** symbol.

The state has 12 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state also has 12 children, details are written below.

* State **77**, as a result of shifting **oper_assign**
* State **78**, as a result of shifting **oper_plus_assign**
* State **79**, as a result of shifting **oper_minus_assign**
* State **80**, as a result of shifting **oper_star_assign**
* State **81**, as a result of shifting **oper_slash_assign**
* State **82**, as a result of shifting **oper_percent_assign**
* State **83**, as a result of shifting **oper_left_left_assign**
* State **84**, as a result of shifting **oper_right_right_assign**
* State **85**, as a result of shifting **oper_accent_assign**
* State **86**, as a result of shifting **oper_stand_assign**
* State **87**, as a result of shifting **oper_ampersand_assign**
* State **88**, as a result of shifting **assign_oper**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* simple_stmt -> item **·**, statement_end rscope keyword_else
* assign -> item **·** assign_oper item, statement_end rscope keyword_else
* assign_oper -> **·** oper_assign, expression
* assign_oper -> **·** oper_plus_assign, expression
* assign_oper -> **·** oper_minus_assign, expression
* assign_oper -> **·** oper_star_assign, expression
* assign_oper -> **·** oper_slash_assign, expression
* assign_oper -> **·** oper_percent_assign, expression
* assign_oper -> **·** oper_left_left_assign, expression
* assign_oper -> **·** oper_right_right_assign, expression
* assign_oper -> **·** oper_accent_assign, expression
* assign_oper -> **·** oper_stand_assign, expression
* assign_oper -> **·** oper_ampersand_assign, expression

## State 56

### Notes

This state preceeds a **stmtunion** symbol.

The state has one parent state, the one below.

* State **40**

This state also has one child state, details are written below.

* State **89**, as a result of shifting **rscope**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* code -> lscope stmtunion **·** rscope, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack statement_end rscope keyword_else

## State 57

### Notes

This state preceeds a **stmt** symbol.

The state has 2 parents, namely the ones below.

* State **40**
* State **90**

This state also has one child state, details are written below.

* State **90**, as a result of shifting **statement_end**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* stmtunion -> stmt **·** statement_end stmtunion, rscope
* stmtunion -> stmt **·**, rscope

## State 58

### Notes

This state preceeds a **simple_stmt** symbol.

The state has 2 parents, namely the ones below.

* State **40**
* State **90**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* stmt -> simple_stmt **·**, statement_end rscope

## State 59

### Notes

This state preceeds a **goto_stmt** symbol.

The state has 12 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* simple_stmt -> goto_stmt **·**, statement_end rscope keyword_else

## State 60

### Notes

This state preceeds a **seg_stmt** symbol.

The state has 12 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* simple_stmt -> seg_stmt **·**, statement_end rscope keyword_else

## State 61

### Notes

This state preceeds a **vardef** symbol.

The state has 12 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* simple_stmt -> vardef **·**, statement_end rscope keyword_else

## State 62

### Notes

This state preceeds a **declare_union** symbol.

The state has 12 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state also has one child state, details are written below.

* State **91**, as a result of shifting **oper_assign**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* vardef -> declare_union **·**, statement_end rscope keyword_else
* vardef -> declare_union **·** oper_assign item, statement_end rscope keyword_else

## State 63

### Notes

This state preceeds an **assign** symbol.

The state has 12 parents, namely the ones below.

* State **40**
* State **74**
* State **75**
* State **90**
* State **131**
* State **134**
* State **141**
* State **158**
* State **161**
* State **162**
* State **172**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* simple_stmt -> assign **·**, statement_end rscope keyword_else

## State 64

### Notes

This state preceeds an **if** symbol.

The state has 2 parents, namely the ones below.

* State **40**
* State **90**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* stmt -> if **·**, statement_end rscope

## State 65

### Notes

This state preceeds an **if_else** symbol.

The state has 2 parents, namely the ones below.

* State **40**
* State **90**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* stmt -> if_else **·**, statement_end rscope

## State 66

### Notes

This state preceeds a **defunion** symbol.

The state has one parent state, the one below.

* State **44**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defunion -> declare oper_union defunion **·**, rparen

## State 67

### Notes

This state preceeds an **item** symbol.

The state has one parent state, the one below.

* State **45**

This state also has one child state, details are written below.

* State **92**, as a result of shifting **oper_union**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defassignunion -> declare oper_assign item **·** oper_union defassignunion, rparen
* defassignunion -> declare oper_assign item **·**, rparen

## State 68

### Notes

This state preceeds an **identifier** symbol.

The state has 4 parents, namely the ones below.

* State **49**
* State **54**
* State **68**
* State **69**

This state also has 3 children, details are written below.

* State **68**, as a result of shifting **identifier**
* State **69**, as a result of shifting **keyword_underscore**
* State **93**, as a result of shifting **sid_union**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | S1 | R2 | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* sid_union -> identifier **·** sid_union, statement_end rscope oper_assign keyword_else
* sid_union -> identifier **·**, statement_end rscope oper_assign keyword_else
* sid_union -> **·** identifier sid_union, statement_end rscope oper_assign
* sid_union -> **·** identifier, statement_end rscope oper_assign
* sid_union -> **·** keyword_underscore sid_union, statement_end rscope oper_assign
* sid_union -> **·** keyword_underscore, statement_end rscope oper_assign

## State 69

### Notes

This state preceeds a **keyword_underscore** symbol.

The state has 4 parents, namely the ones below.

* State **49**
* State **54**
* State **68**
* State **69**

This state also has 3 children, details are written below.

* State **68**, as a result of shifting **identifier**
* State **69**, as a result of shifting **keyword_underscore**
* State **94**, as a result of shifting **sid_union**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | S1 | R2 | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* sid_union -> keyword_underscore **·** sid_union, statement_end rscope oper_assign keyword_else
* sid_union -> keyword_underscore **·**, statement_end rscope oper_assign keyword_else
* sid_union -> **·** identifier sid_union, statement_end rscope oper_assign
* sid_union -> **·** identifier, statement_end rscope oper_assign
* sid_union -> **·** keyword_underscore sid_union, statement_end rscope oper_assign
* sid_union -> **·** keyword_underscore, statement_end rscope oper_assign

## State 70

### Notes

This state preceeds a **sid_union** symbol.

The state has one parent state, the one below.

* State **49**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* declare_union -> keyword_var sid_union **·**, statement_end rscope oper_assign keyword_else

## State 71

### Notes

This state preceeds an **oper_colon** symbol.

The state has one parent state, the one below.

* State **50**

This state also has one child state, details are written below.

* State **95**, as a result of shifting **identifier**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* goto_stmt -> keyword_goto oper_colon **·** identifier, statement_end rscope keyword_else

## State 72

### Notes

This state preceeds an **oper_colon** symbol.

The state has one parent state, the one below.

* State **51**

This state also has one child state, details are written below.

* State **96**, as a result of shifting **identifier**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* seg_stmt -> keyword_seg oper_colon **·** identifier, statement_end rscope keyword_else

## State 73

### Notes

This state preceeds a **lparen** symbol.

The state has 6 parents, namely the ones below.

* State **52**
* State **53**
* State **142**
* State **143**
* State **152**
* State **153**

This state also has 18 children, details are written below.

* State **97**, as a result of shifting **oper_plus**
* State **98**, as a result of shifting **oper_minus**
* State **99**, as a result of shifting **oper_star**
* State **100**, as a result of shifting **oper_slash**
* State **101**, as a result of shifting **oper_percent**
* State **102**, as a result of shifting **oper_left_left**
* State **103**, as a result of shifting **oper_right_right**
* State **104**, as a result of shifting **oper_accent**
* State **105**, as a result of shifting **oper_stand**
* State **106**, as a result of shifting **oper_ampersand**
* State **107**, as a result of shifting **oper_equal**
* State **108**, as a result of shifting **oper_not_equal**
* State **109**, as a result of shifting **oper_less_than**
* State **110**, as a result of shifting **oper_less_than_equal**
* State **111**, as a result of shifting **oper_greater_than**
* State **112**, as a result of shifting **oper_greater_than_equal**
* State **113**, as a result of shifting **paren_oper**
* State **114**, as a result of shifting **any_oper**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* single_arg -> lparen **·** paren_oper rparen lparen item rparen, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope
* paren_oper -> **·** any_oper union, rparen
* any_oper -> **·** oper_plus, expression
* any_oper -> **·** oper_minus, expression
* any_oper -> **·** oper_star, expression
* any_oper -> **·** oper_slash, expression
* any_oper -> **·** oper_percent, expression
* any_oper -> **·** oper_left_left, expression
* any_oper -> **·** oper_right_right, expression
* any_oper -> **·** oper_accent, expression
* any_oper -> **·** oper_stand, expression
* any_oper -> **·** oper_ampersand, expression
* any_oper -> **·** oper_equal, expression
* any_oper -> **·** oper_not_equal, expression
* any_oper -> **·** oper_less_than, expression
* any_oper -> **·** oper_less_than_equal, expression
* any_oper -> **·** oper_greater_than, expression
* any_oper -> **·** oper_greater_than_equal, expression

## State 74

### Notes

This state preceeds a **single_arg** symbol.

The state has one parent state, the one below.

* State **52**

This state also has 26 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **52**, as a result of shifting **keyword_while**
* State **53**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **115**, as a result of shifting **code**
* State **116**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **117**, as a result of shifting **if**
* State **118**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | S1 | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* if -> keyword_while single_arg **·** if, statement_end rscope
* if -> keyword_while single_arg **·** simple_stmt, statement_end rscope
* if -> keyword_while single_arg **·** code, statement_end rscope
* if_else -> keyword_while single_arg **·** if_else, statement_end rscope keyword_else
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* simple_stmt -> **·** goto_stmt, statement_end rscope
* simple_stmt -> **·** seg_stmt, statement_end rscope
* simple_stmt -> **·** vardef, statement_end rscope
* simple_stmt -> **·** assign, statement_end rscope
* simple_stmt -> **·** item, statement_end rscope
* code -> **·** lscope stmtunion rscope, statement_end rscope
* code -> **·** lscope rscope, statement_end rscope
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, statement_end rscope
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, statement_end rscope
* if_else -> **·** keyword_if single_arg code keyword_else if_else, statement_end rscope
* if_else -> **·** keyword_while single_arg if_else, statement_end rscope
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end rscope
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end rscope
* vardef -> **·** declare_union, statement_end rscope
* vardef -> **·** declare_union oper_assign item, statement_end rscope
* assign -> **·** item assign_oper item, statement_end rscope
* item -> **·** expression, statement_end rscope oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end rscope oper_assign
* declare_union -> **·** keyword_var sid_union, statement_end rscope oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 75

### Notes

This state preceeds a **single_arg** symbol.

The state has one parent state, the one below.

* State **53**

This state also has 26 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **52**, as a result of shifting **keyword_while**
* State **53**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **119**, as a result of shifting **code**
* State **120**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **121**, as a result of shifting **if**
* State **122**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | S1 | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* if -> keyword_if single_arg **·** if, statement_end rscope
* if -> keyword_if single_arg **·** simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg **·** code, statement_end rscope
* if -> keyword_if single_arg **·** if_else keyword_else if, statement_end rscope
* if -> keyword_if single_arg **·** simple_stmt statement_end keyword_else if, statement_end rscope
* if -> keyword_if single_arg **·** code keyword_else if, statement_end rscope
* if -> keyword_if single_arg **·** if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg **·** simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg **·** code keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg **·** if_else keyword_else code, statement_end rscope
* if -> keyword_if single_arg **·** simple_stmt statement_end keyword_else code, statement_end rscope
* if -> keyword_if single_arg **·** code keyword_else code, statement_end rscope
* if_else -> keyword_if single_arg **·** if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> keyword_if single_arg **·** simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> keyword_if single_arg **·** code keyword_else if_else, statement_end rscope keyword_else
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* simple_stmt -> **·** goto_stmt, statement_end keyword_else
* simple_stmt -> **·** seg_stmt, statement_end keyword_else
* simple_stmt -> **·** vardef, statement_end keyword_else
* simple_stmt -> **·** assign, statement_end keyword_else
* simple_stmt -> **·** item, statement_end keyword_else
* code -> **·** lscope stmtunion rscope, statement_end rscope keyword_else
* code -> **·** lscope rscope, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, keyword_else
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, keyword_else
* if_else -> **·** keyword_if single_arg code keyword_else if_else, keyword_else
* if_else -> **·** keyword_while single_arg if_else, keyword_else
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end keyword_else
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end keyword_else
* vardef -> **·** declare_union, statement_end keyword_else
* vardef -> **·** declare_union oper_assign item, statement_end keyword_else
* assign -> **·** item assign_oper item, statement_end keyword_else
* item -> **·** expression, statement_end keyword_else oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end keyword_else oper_assign
* declare_union -> **·** keyword_var sid_union, statement_end keyword_else oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 76

### Notes

This state preceeds a **sid_union** symbol.

The state has one parent state, the one below.

* State **54**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* declare_union -> type sid_union **·**, statement_end rscope oper_assign keyword_else

## State 77

### Notes

This state preceeds an **oper_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_assign **·**, expression

## State 78

### Notes

This state preceeds an **oper_plus_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_plus_assign **·**, expression

## State 79

### Notes

This state preceeds an **oper_minus_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_minus_assign **·**, expression

## State 80

### Notes

This state preceeds an **oper_star_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_star_assign **·**, expression

## State 81

### Notes

This state preceeds an **oper_slash_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_slash_assign **·**, expression

## State 82

### Notes

This state preceeds an **oper_percent_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_percent_assign **·**, expression

## State 83

### Notes

This state preceeds an **oper_left_left_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_left_left_assign **·**, expression

## State 84

### Notes

This state preceeds an **oper_right_right_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_right_right_assign **·**, expression

## State 85

### Notes

This state preceeds an **oper_accent_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_accent_assign **·**, expression

## State 86

### Notes

This state preceeds an **oper_stand_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_stand_assign **·**, expression

## State 87

### Notes

This state preceeds an **oper_ampersand_assign** symbol.

The state has one parent state, the one below.

* State **55**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign_oper -> oper_ampersand_assign **·**, expression

## State 88

### Notes

This state preceeds an **assign_oper** symbol.

The state has one parent state, the one below.

* State **55**

This state also has one child state, details are written below.

* State **123**, as a result of shifting **item**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign -> item assign_oper **·** item, statement_end rscope keyword_else
* item -> **·** expression, statement_end rscope

## State 89

### Notes

This state preceeds a **rscope** symbol.

The state has one parent state, the one below.

* State **56**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | R2 | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | - | R2 | R2 | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 |

### Items

* code -> lscope stmtunion rscope **·**, keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void keyword_goto identifier keyword_var keyword_graphic ending rbrack statement_end rscope keyword_else

## State 90

### Notes

This state preceeds a **statement_end** symbol.

The state has one parent state, the one below.

* State **57**

This state also has 27 children, details are written below.

* State **25**, as a result of shifting **identifier**
* State **48**, as a result of shifting **statement_end**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **52**, as a result of shifting **keyword_while**
* State **53**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **124**, as a result of shifting **stmtunion**
* State **57**, as a result of shifting **stmt**
* State **58**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **64**, as a result of shifting **if**
* State **65**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* stmtunion -> stmt statement_end **·** stmtunion, rscope
* stmtunion -> **·** stmt statement_end stmtunion, rscope
* stmtunion -> **·** stmt, rscope
* stmt -> **·** if, statement_end rscope
* stmt -> **·** if_else, statement_end rscope
* stmt -> **·** simple_stmt, statement_end rscope
* stmt -> **·** statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, statement_end rscope
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, statement_end rscope
* if_else -> **·** keyword_if single_arg code keyword_else if_else, statement_end rscope
* if_else -> **·** keyword_while single_arg if_else, statement_end rscope
* simple_stmt -> **·** goto_stmt, statement_end rscope
* simple_stmt -> **·** seg_stmt, statement_end rscope
* simple_stmt -> **·** vardef, statement_end rscope
* simple_stmt -> **·** assign, statement_end rscope
* simple_stmt -> **·** item, statement_end rscope
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end rscope
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end rscope
* vardef -> **·** declare_union, statement_end rscope
* vardef -> **·** declare_union oper_assign item, statement_end rscope
* assign -> **·** item assign_oper item, statement_end rscope
* item -> **·** expression, statement_end rscope oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end rscope oper_assign
* declare_union -> **·** keyword_var sid_union, statement_end rscope oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 91

### Notes

This state preceeds an **oper_assign** symbol.

The state has one parent state, the one below.

* State **62**

This state also has one child state, details are written below.

* State **125**, as a result of shifting **item**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* vardef -> declare_union oper_assign **·** item, statement_end rscope keyword_else
* item -> **·** expression, statement_end rscope

## State 92

### Notes

This state preceeds an **oper_union** symbol.

The state has one parent state, the one below.

* State **67**

This state also has 14 children, details are written below.

* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **8**, as a result of shifting **keyword_var**
* State **9**, as a result of shifting **keyword_goto**
* State **11**, as a result of shifting **keyword_interface**
* State **126**, as a result of shifting **declare**
* State **17**, as a result of shifting **type**
* State **127**, as a result of shifting **defassignunion**
* State **18**, as a result of shifting **location**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | - | S1 | - | - | - | - | - | - | - | - | - | - | G5 | - | - | G5 | G5 | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defassignunion -> declare oper_assign item oper_union **·** defassignunion, rparen
* defassignunion -> **·** declare oper_assign item oper_union defassignunion, rparen
* defassignunion -> **·** declare oper_assign item, rparen
* declare -> **·** type identifier, oper_assign
* declare -> **·** type keyword_underscore, oper_assign
* declare -> **·** keyword_var identifier, oper_assign
* declare -> **·** keyword_var keyword_underscore, oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 93

### Notes

This state preceeds a **sid_union** symbol.

The state has one parent state, the one below.

* State **68**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* sid_union -> identifier sid_union **·**, statement_end rscope oper_assign keyword_else

## State 94

### Notes

This state preceeds a **sid_union** symbol.

The state has one parent state, the one below.

* State **69**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* sid_union -> keyword_underscore sid_union **·**, statement_end rscope oper_assign keyword_else

## State 95

### Notes

This state preceeds an **identifier** symbol.

The state has one parent state, the one below.

* State **71**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* goto_stmt -> keyword_goto oper_colon identifier **·**, statement_end rscope keyword_else

## State 96

### Notes

This state preceeds an **identifier** symbol.

The state has one parent state, the one below.

* State **72**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* seg_stmt -> keyword_seg oper_colon identifier **·**, statement_end rscope keyword_else

## State 97

### Notes

This state preceeds an **oper_plus** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_plus **·**, expression

## State 98

### Notes

This state preceeds an **oper_minus** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_minus **·**, expression

## State 99

### Notes

This state preceeds an **oper_star** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_star **·**, expression

## State 100

### Notes

This state preceeds an **oper_slash** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_slash **·**, expression

## State 101

### Notes

This state preceeds an **oper_percent** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_percent **·**, expression

## State 102

### Notes

This state preceeds an **oper_left_left** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_left_left **·**, expression

## State 103

### Notes

This state preceeds an **oper_right_right** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_right_right **·**, expression

## State 104

### Notes

This state preceeds an **oper_accent** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_accent **·**, expression

## State 105

### Notes

This state preceeds an **oper_stand** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_stand **·**, expression

## State 106

### Notes

This state preceeds an **oper_ampersand** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_ampersand **·**, expression

## State 107

### Notes

This state preceeds an **oper_equal** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_equal **·**, expression

## State 108

### Notes

This state preceeds an **oper_not_equal** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_not_equal **·**, expression

## State 109

### Notes

This state preceeds an **oper_less_than** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_less_than **·**, expression

## State 110

### Notes

This state preceeds an **oper_less_than_equal** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_less_than_equal **·**, expression

## State 111

### Notes

This state preceeds an **oper_greater_than** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_greater_than **·**, expression

## State 112

### Notes

This state preceeds an **oper_greater_than_equal** symbol.

The state has one parent state, the one below.

* State **73**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | - | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* any_oper -> oper_greater_than_equal **·**, expression

## State 113

### Notes

This state preceeds a **paren_oper** symbol.

The state has one parent state, the one below.

* State **73**

This state also has one child state, details are written below.

* State **128**, as a result of shifting **rparen**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* single_arg -> lparen paren_oper **·** rparen lparen item rparen, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope

## State 114

### Notes

This state preceeds an **any_oper** symbol.

The state has one parent state, the one below.

* State **73**

This state also has 2 children, details are written below.

* State **129**, as a result of shifting **item**
* State **130**, as a result of shifting **union**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* paren_oper -> any_oper **·** union, rparen
* union -> **·** item oper_union union, rparen
* union -> **·** item, rparen
* item -> **·** expression, oper_union rparen

## State 115

### Notes

This state preceeds a **code** symbol.

The state has 2 parents, namely the ones below.

* State **74**
* State **161**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_while single_arg code **·**, statement_end rscope

## State 116

### Notes

This state preceeds a **simple_stmt** symbol.

The state has 2 parents, namely the ones below.

* State **74**
* State **161**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_while single_arg simple_stmt **·**, statement_end rscope

## State 117

### Notes

This state preceeds an **if** symbol.

The state has 2 parents, namely the ones below.

* State **74**
* State **161**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_while single_arg if **·**, statement_end rscope

## State 118

### Notes

This state preceeds an **if_else** symbol.

The state has 2 parents, namely the ones below.

* State **74**
* State **157**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_while single_arg if_else **·**, statement_end rscope keyword_else

## State 119

### Notes

This state preceeds a **code** symbol.

The state has one parent state, the one below.

* State **75**

This state also has one child state, details are written below.

* State **131**, as a result of shifting **keyword_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg code **·**, statement_end rscope
* if -> keyword_if single_arg code **·** keyword_else if, statement_end rscope
* if -> keyword_if single_arg code **·** keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg code **·** keyword_else code, statement_end rscope
* if_else -> keyword_if single_arg code **·** keyword_else if_else, statement_end rscope keyword_else

## State 120

### Notes

This state preceeds a **simple_stmt** symbol.

The state has one parent state, the one below.

* State **75**

This state also has 2 children, details are written below.

* State **132**, as a result of shifting **statement_end**
* State **133**, as a result of shifting **keyword_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg simple_stmt **·** statement_end, statement_end rscope
* if -> keyword_if single_arg simple_stmt **·** statement_end keyword_else if, statement_end rscope
* if -> keyword_if single_arg simple_stmt **·** statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg simple_stmt **·** statement_end keyword_else code, statement_end rscope
* if_else -> keyword_if single_arg simple_stmt **·** keyword_else if_else, statement_end rscope keyword_else

## State 121

### Notes

This state preceeds an **if** symbol.

The state has 2 parents, namely the ones below.

* State **75**
* State **162**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg if **·**, statement_end rscope

## State 122

### Notes

This state preceeds an **if_else** symbol.

The state has one parent state, the one below.

* State **75**

This state also has one child state, details are written below.

* State **134**, as a result of shifting **keyword_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg if_else **·** keyword_else if, statement_end rscope
* if -> keyword_if single_arg if_else **·** keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg if_else **·** keyword_else code, statement_end rscope
* if_else -> keyword_if single_arg if_else **·** keyword_else if_else, statement_end rscope keyword_else

## State 123

### Notes

This state preceeds an **item** symbol.

The state has one parent state, the one below.

* State **88**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* assign -> item assign_oper item **·**, statement_end rscope keyword_else

## State 124

### Notes

This state preceeds a **stmtunion** symbol.

The state has one parent state, the one below.

* State **90**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* stmtunion -> stmt statement_end stmtunion **·**, rscope

## State 125

### Notes

This state preceeds an **item** symbol.

The state has one parent state, the one below.

* State **91**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* vardef -> declare_union oper_assign item **·**, statement_end rscope keyword_else

## State 126

### Notes

This state preceeds a **declare** symbol.

The state has one parent state, the one below.

* State **92**

This state also has one child state, details are written below.

* State **45**, as a result of shifting **oper_assign**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defassignunion -> declare **·** oper_assign item oper_union defassignunion, rparen
* defassignunion -> declare **·** oper_assign item, rparen

## State 127

### Notes

This state preceeds a **defassignunion** symbol.

The state has one parent state, the one below.

* State **92**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* defassignunion -> declare oper_assign item oper_union defassignunion **·**, rparen

## State 128

### Notes

This state preceeds a **rparen** symbol.

The state has one parent state, the one below.

* State **113**

This state also has one child state, details are written below.

* State **135**, as a result of shifting **lparen**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* single_arg -> lparen paren_oper rparen **·** lparen item rparen, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope

## State 129

### Notes

This state preceeds an **item** symbol.

The state has 2 parents, namely the ones below.

* State **114**
* State **136**

This state also has one child state, details are written below.

* State **136**, as a result of shifting **oper_union**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* union -> item **·** oper_union union, rparen
* union -> item **·**, rparen

## State 130

### Notes

This state preceeds an **union** symbol.

The state has one parent state, the one below.

* State **114**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* paren_oper -> any_oper union **·**, rparen

## State 131

### Notes

This state preceeds a **keyword_else** symbol.

The state has one parent state, the one below.

* State **119**

This state also has 26 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **52**, as a result of shifting **keyword_while**
* State **53**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **137**, as a result of shifting **code**
* State **138**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **139**, as a result of shifting **if**
* State **140**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | S1 | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* if -> keyword_if single_arg code keyword_else **·** if, statement_end rscope
* if -> keyword_if single_arg code keyword_else **·** simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg code keyword_else **·** code, statement_end rscope
* if_else -> keyword_if single_arg code keyword_else **·** if_else, statement_end rscope keyword_else
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* simple_stmt -> **·** goto_stmt, statement_end
* simple_stmt -> **·** seg_stmt, statement_end
* simple_stmt -> **·** vardef, statement_end
* simple_stmt -> **·** assign, statement_end
* simple_stmt -> **·** item, statement_end
* code -> **·** lscope stmtunion rscope, statement_end rscope
* code -> **·** lscope rscope, statement_end rscope
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg code keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_while single_arg if_else, statement_end rscope keyword_else
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end
* vardef -> **·** declare_union, statement_end
* vardef -> **·** declare_union oper_assign item, statement_end
* assign -> **·** item assign_oper item, statement_end
* item -> **·** expression, statement_end oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end oper_assign
* declare_union -> **·** keyword_var sid_union, statement_end oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 132

### Notes

This state preceeds a **statement_end** symbol.

The state has 2 parents, namely the ones below.

* State **120**
* State **168**

This state also has one child state, details are written below.

* State **141**, as a result of shifting **keyword_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg simple_stmt statement_end **·**, statement_end rscope
* if -> keyword_if single_arg simple_stmt statement_end **·** keyword_else if, statement_end rscope
* if -> keyword_if single_arg simple_stmt statement_end **·** keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg simple_stmt statement_end **·** keyword_else code, statement_end rscope

## State 133

### Notes

This state preceeds a **keyword_else** symbol.

The state has 2 parents, namely the ones below.

* State **120**
* State **165**

This state also has 3 children, details are written below.

* State **142**, as a result of shifting **keyword_while**
* State **143**, as a result of shifting **keyword_if**
* State **144**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_if single_arg simple_stmt keyword_else **·** if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg code keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_while single_arg if_else, statement_end rscope keyword_else

## State 134

### Notes

This state preceeds a **keyword_else** symbol.

The state has one parent state, the one below.

* State **122**

This state also has 26 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **52**, as a result of shifting **keyword_while**
* State **53**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **145**, as a result of shifting **code**
* State **146**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **147**, as a result of shifting **if**
* State **148**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | S1 | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* if -> keyword_if single_arg if_else keyword_else **·** if, statement_end rscope
* if -> keyword_if single_arg if_else keyword_else **·** simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg if_else keyword_else **·** code, statement_end rscope
* if_else -> keyword_if single_arg if_else keyword_else **·** if_else, statement_end rscope keyword_else
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* simple_stmt -> **·** goto_stmt, statement_end
* simple_stmt -> **·** seg_stmt, statement_end
* simple_stmt -> **·** vardef, statement_end
* simple_stmt -> **·** assign, statement_end
* simple_stmt -> **·** item, statement_end
* code -> **·** lscope stmtunion rscope, statement_end rscope
* code -> **·** lscope rscope, statement_end rscope
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg code keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_while single_arg if_else, statement_end rscope keyword_else
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end
* vardef -> **·** declare_union, statement_end
* vardef -> **·** declare_union oper_assign item, statement_end
* assign -> **·** item assign_oper item, statement_end
* item -> **·** expression, statement_end oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end oper_assign
* declare_union -> **·** keyword_var sid_union, statement_end oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 135

### Notes

This state preceeds a **lparen** symbol.

The state has one parent state, the one below.

* State **128**

This state also has one child state, details are written below.

* State **149**, as a result of shifting **item**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* single_arg -> lparen paren_oper rparen lparen **·** item rparen, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope
* item -> **·** expression, rparen

## State 136

### Notes

This state preceeds an **oper_union** symbol.

The state has one parent state, the one below.

* State **129**

This state also has 2 children, details are written below.

* State **129**, as a result of shifting **item**
* State **150**, as a result of shifting **union**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* union -> item oper_union **·** union, rparen
* union -> **·** item oper_union union, rparen
* union -> **·** item, rparen
* item -> **·** expression, oper_union rparen

## State 137

### Notes

This state preceeds a **code** symbol.

The state has 2 parents, namely the ones below.

* State **131**
* State **172**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg code keyword_else code **·**, statement_end rscope

## State 138

### Notes

This state preceeds a **simple_stmt** symbol.

The state has 2 parents, namely the ones below.

* State **131**
* State **172**

This state also has one child state, details are written below.

* State **151**, as a result of shifting **statement_end**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg code keyword_else simple_stmt **·** statement_end, statement_end rscope

## State 139

### Notes

This state preceeds an **if** symbol.

The state has 2 parents, namely the ones below.

* State **131**
* State **172**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg code keyword_else if **·**, statement_end rscope

## State 140

### Notes

This state preceeds an **if_else** symbol.

The state has 2 parents, namely the ones below.

* State **131**
* State **170**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_if single_arg code keyword_else if_else **·**, statement_end rscope keyword_else

## State 141

### Notes

This state preceeds a **keyword_else** symbol.

The state has one parent state, the one below.

* State **132**

This state also has 25 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **152**, as a result of shifting **keyword_while**
* State **153**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **154**, as a result of shifting **code**
* State **155**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **156**, as a result of shifting **if**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | S1 | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* if -> keyword_if single_arg simple_stmt statement_end keyword_else **·** if, statement_end rscope
* if -> keyword_if single_arg simple_stmt statement_end keyword_else **·** simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg simple_stmt statement_end keyword_else **·** code, statement_end rscope
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* simple_stmt -> **·** goto_stmt, statement_end
* simple_stmt -> **·** seg_stmt, statement_end
* simple_stmt -> **·** vardef, statement_end
* simple_stmt -> **·** assign, statement_end
* simple_stmt -> **·** item, statement_end
* code -> **·** lscope stmtunion rscope, statement_end rscope
* code -> **·** lscope rscope, statement_end rscope
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end
* vardef -> **·** declare_union, statement_end
* vardef -> **·** declare_union oper_assign item, statement_end
* assign -> **·** item assign_oper item, statement_end
* item -> **·** expression, statement_end oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end oper_assign
* declare_union -> **·** keyword_var sid_union, statement_end oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 142

### Notes

This state preceeds a **keyword_while** symbol.

The state has 5 parents, namely the ones below.

* State **133**
* State **157**
* State **158**
* State **170**
* State **171**

This state also has 2 children, details are written below.

* State **73**, as a result of shifting **lparen**
* State **157**, as a result of shifting **single_arg**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_while **·** single_arg if_else, statement_end rscope keyword_else
* single_arg -> **·** lparen paren_oper rparen lparen item rparen, keyword_if keyword_while

## State 143

### Notes

This state preceeds a **keyword_if** symbol.

The state has 5 parents, namely the ones below.

* State **133**
* State **157**
* State **158**
* State **170**
* State **171**

This state also has 2 children, details are written below.

* State **73**, as a result of shifting **lparen**
* State **158**, as a result of shifting **single_arg**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_if **·** single_arg if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> keyword_if **·** single_arg simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> keyword_if **·** single_arg code keyword_else if_else, statement_end rscope keyword_else
* single_arg -> **·** lparen paren_oper rparen lparen item rparen, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope

## State 144

### Notes

This state preceeds an **if_else** symbol.

The state has one parent state, the one below.

* State **133**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_if single_arg simple_stmt keyword_else if_else **·**, statement_end rscope keyword_else

## State 145

### Notes

This state preceeds a **code** symbol.

The state has 2 parents, namely the ones below.

* State **134**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg if_else keyword_else code **·**, statement_end rscope

## State 146

### Notes

This state preceeds a **simple_stmt** symbol.

The state has 2 parents, namely the ones below.

* State **134**
* State **173**

This state also has one child state, details are written below.

* State **159**, as a result of shifting **statement_end**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg if_else keyword_else simple_stmt **·** statement_end, statement_end rscope

## State 147

### Notes

This state preceeds an **if** symbol.

The state has 2 parents, namely the ones below.

* State **134**
* State **173**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg if_else keyword_else if **·**, statement_end rscope

## State 148

### Notes

This state preceeds an **if_else** symbol.

The state has 2 parents, namely the ones below.

* State **134**
* State **171**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_if single_arg if_else keyword_else if_else **·**, statement_end rscope keyword_else

## State 149

### Notes

This state preceeds an **item** symbol.

The state has one parent state, the one below.

* State **135**

This state also has one child state, details are written below.

* State **160**, as a result of shifting **rparen**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* single_arg -> lparen paren_oper rparen lparen item **·** rparen, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope

## State 150

### Notes

This state preceeds an **union** symbol.

The state has one parent state, the one below.

* State **136**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* union -> item oper_union union **·**, rparen

## State 151

### Notes

This state preceeds a **statement_end** symbol.

The state has one parent state, the one below.

* State **138**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg code keyword_else simple_stmt statement_end **·**, statement_end rscope

## State 152

### Notes

This state preceeds a **keyword_while** symbol.

The state has 4 parents, namely the ones below.

* State **141**
* State **161**
* State **172**
* State **173**

This state also has 2 children, details are written below.

* State **73**, as a result of shifting **lparen**
* State **161**, as a result of shifting **single_arg**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_while **·** single_arg if, statement_end rscope
* if -> keyword_while **·** single_arg simple_stmt, statement_end rscope
* if -> keyword_while **·** single_arg code, statement_end rscope
* single_arg -> **·** lparen paren_oper rparen lparen item rparen, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope

## State 153

### Notes

This state preceeds a **keyword_if** symbol.

The state has 4 parents, namely the ones below.

* State **141**
* State **161**
* State **172**
* State **173**

This state also has 2 children, details are written below.

* State **73**, as a result of shifting **lparen**
* State **162**, as a result of shifting **single_arg**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if **·** single_arg if, statement_end rscope
* if -> keyword_if **·** single_arg simple_stmt statement_end, statement_end rscope
* if -> keyword_if **·** single_arg code, statement_end rscope
* if -> keyword_if **·** single_arg if_else keyword_else if, statement_end rscope
* if -> keyword_if **·** single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> keyword_if **·** single_arg code keyword_else if, statement_end rscope
* if -> keyword_if **·** single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if **·** single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if **·** single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if **·** single_arg if_else keyword_else code, statement_end rscope
* if -> keyword_if **·** single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> keyword_if **·** single_arg code keyword_else code, statement_end rscope
* single_arg -> **·** lparen paren_oper rparen lparen item rparen, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope

## State 154

### Notes

This state preceeds a **code** symbol.

The state has one parent state, the one below.

* State **141**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg simple_stmt statement_end keyword_else code **·**, statement_end rscope

## State 155

### Notes

This state preceeds a **simple_stmt** symbol.

The state has one parent state, the one below.

* State **141**

This state also has one child state, details are written below.

* State **163**, as a result of shifting **statement_end**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt **·** statement_end, statement_end rscope

## State 156

### Notes

This state preceeds an **if** symbol.

The state has one parent state, the one below.

* State **141**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg simple_stmt statement_end keyword_else if **·**, statement_end rscope

## State 157

### Notes

This state preceeds a **single_arg** symbol.

The state has one parent state, the one below.

* State **142**

This state also has 3 children, details are written below.

* State **142**, as a result of shifting **keyword_while**
* State **143**, as a result of shifting **keyword_if**
* State **118**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_while single_arg **·** if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg code keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_while single_arg if_else, statement_end rscope keyword_else

## State 158

### Notes

This state preceeds a **single_arg** symbol.

The state has one parent state, the one below.

* State **143**

This state also has 25 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **142**, as a result of shifting **keyword_while**
* State **143**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **164**, as a result of shifting **code**
* State **165**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **166**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | S1 | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* if_else -> keyword_if single_arg **·** if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> keyword_if single_arg **·** simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> keyword_if single_arg **·** code keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, keyword_else
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, keyword_else
* if_else -> **·** keyword_if single_arg code keyword_else if_else, keyword_else
* if_else -> **·** keyword_while single_arg if_else, keyword_else
* simple_stmt -> **·** goto_stmt, keyword_else
* simple_stmt -> **·** seg_stmt, keyword_else
* simple_stmt -> **·** vardef, keyword_else
* simple_stmt -> **·** assign, keyword_else
* simple_stmt -> **·** item, keyword_else
* code -> **·** lscope stmtunion rscope, keyword_else
* code -> **·** lscope rscope, keyword_else
* goto_stmt -> **·** keyword_goto oper_colon identifier, keyword_else
* seg_stmt -> **·** keyword_seg oper_colon identifier, keyword_else
* vardef -> **·** declare_union, keyword_else
* vardef -> **·** declare_union oper_assign item, keyword_else
* assign -> **·** item assign_oper item, keyword_else
* item -> **·** expression, keyword_else oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, keyword_else oper_assign
* declare_union -> **·** keyword_var sid_union, keyword_else oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 159

### Notes

This state preceeds a **statement_end** symbol.

The state has one parent state, the one below.

* State **146**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg if_else keyword_else simple_stmt statement_end **·**, statement_end rscope

## State 160

### Notes

This state preceeds a **rparen** symbol.

The state has one parent state, the one below.

* State **149**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | R2 | - | R2 | - | R2 | - | - | R2 | R2 | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | R2 | - | R2 | R2 | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* single_arg -> lparen paren_oper rparen lparen item rparen **·**, keyword_if keyword_while keyword_goto keyword_seg keyword_shader keyword_interface keyword_bool keyword_int keyword_nat keyword_float keyword_void identifier keyword_var expression lscope

## State 161

### Notes

This state preceeds a **single_arg** symbol.

The state has one parent state, the one below.

* State **152**

This state also has 25 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **152**, as a result of shifting **keyword_while**
* State **153**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **115**, as a result of shifting **code**
* State **116**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **117**, as a result of shifting **if**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | S1 | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* if -> keyword_while single_arg **·** if, statement_end rscope
* if -> keyword_while single_arg **·** simple_stmt, statement_end rscope
* if -> keyword_while single_arg **·** code, statement_end rscope
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* simple_stmt -> **·** goto_stmt, statement_end rscope
* simple_stmt -> **·** seg_stmt, statement_end rscope
* simple_stmt -> **·** vardef, statement_end rscope
* simple_stmt -> **·** assign, statement_end rscope
* simple_stmt -> **·** item, statement_end rscope
* code -> **·** lscope stmtunion rscope, statement_end rscope
* code -> **·** lscope rscope, statement_end rscope
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end rscope
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end rscope
* vardef -> **·** declare_union, statement_end rscope
* vardef -> **·** declare_union oper_assign item, statement_end rscope
* assign -> **·** item assign_oper item, statement_end rscope
* item -> **·** expression, statement_end rscope oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end rscope oper_assign
* declare_union -> **·** keyword_var sid_union, statement_end rscope oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 162

### Notes

This state preceeds a **single_arg** symbol.

The state has one parent state, the one below.

* State **153**

This state also has 26 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **52**, as a result of shifting **keyword_while**
* State **53**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **167**, as a result of shifting **code**
* State **168**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **121**, as a result of shifting **if**
* State **169**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | S1 | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* if -> keyword_if single_arg **·** if, statement_end rscope
* if -> keyword_if single_arg **·** simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg **·** code, statement_end rscope
* if -> keyword_if single_arg **·** if_else keyword_else if, statement_end rscope
* if -> keyword_if single_arg **·** simple_stmt statement_end keyword_else if, statement_end rscope
* if -> keyword_if single_arg **·** code keyword_else if, statement_end rscope
* if -> keyword_if single_arg **·** if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg **·** simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg **·** code keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg **·** if_else keyword_else code, statement_end rscope
* if -> keyword_if single_arg **·** simple_stmt statement_end keyword_else code, statement_end rscope
* if -> keyword_if single_arg **·** code keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* simple_stmt -> **·** goto_stmt, statement_end
* simple_stmt -> **·** seg_stmt, statement_end
* simple_stmt -> **·** vardef, statement_end
* simple_stmt -> **·** assign, statement_end
* simple_stmt -> **·** item, statement_end
* code -> **·** lscope stmtunion rscope, statement_end rscope keyword_else
* code -> **·** lscope rscope, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, keyword_else
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, keyword_else
* if_else -> **·** keyword_if single_arg code keyword_else if_else, keyword_else
* if_else -> **·** keyword_while single_arg if_else, keyword_else
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end
* vardef -> **·** declare_union, statement_end
* vardef -> **·** declare_union oper_assign item, statement_end
* assign -> **·** item assign_oper item, statement_end
* item -> **·** expression, statement_end oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end oper_assign
* declare_union -> **·** keyword_var sid_union, statement_end oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 163

### Notes

This state preceeds a **statement_end** symbol.

The state has one parent state, the one below.

* State **155**

This state is a leaf state, it does not have any children, and is only able to reduce. **Most R / R conflicts either happen or initiate in these states.**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end **·**, statement_end rscope

## State 164

### Notes

This state preceeds a **code** symbol.

The state has one parent state, the one below.

* State **158**

This state also has one child state, details are written below.

* State **170**, as a result of shifting **keyword_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_if single_arg code **·** keyword_else if_else, statement_end rscope keyword_else

## State 165

### Notes

This state preceeds a **simple_stmt** symbol.

The state has one parent state, the one below.

* State **158**

This state also has one child state, details are written below.

* State **133**, as a result of shifting **keyword_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_if single_arg simple_stmt **·** keyword_else if_else, statement_end rscope keyword_else

## State 166

### Notes

This state preceeds an **if_else** symbol.

The state has one parent state, the one below.

* State **158**

This state also has one child state, details are written below.

* State **171**, as a result of shifting **keyword_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_if single_arg if_else **·** keyword_else if_else, statement_end rscope keyword_else

## State 167

### Notes

This state preceeds a **code** symbol.

The state has one parent state, the one below.

* State **162**

This state also has one child state, details are written below.

* State **172**, as a result of shifting **keyword_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | R2 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg code **·**, statement_end rscope
* if -> keyword_if single_arg code **·** keyword_else if, statement_end rscope
* if -> keyword_if single_arg code **·** keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg code **·** keyword_else code, statement_end rscope

## State 168

### Notes

This state preceeds a **simple_stmt** symbol.

The state has one parent state, the one below.

* State **162**

This state also has one child state, details are written below.

* State **132**, as a result of shifting **statement_end**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg simple_stmt **·** statement_end, statement_end rscope
* if -> keyword_if single_arg simple_stmt **·** statement_end keyword_else if, statement_end rscope
* if -> keyword_if single_arg simple_stmt **·** statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg simple_stmt **·** statement_end keyword_else code, statement_end rscope

## State 169

### Notes

This state preceeds an **if_else** symbol.

The state has one parent state, the one below.

* State **162**

This state also has one child state, details are written below.

* State **173**, as a result of shifting **keyword_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |

### Items

* if -> keyword_if single_arg if_else **·** keyword_else if, statement_end rscope
* if -> keyword_if single_arg if_else **·** keyword_else simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg if_else **·** keyword_else code, statement_end rscope

## State 170

### Notes

This state preceeds a **keyword_else** symbol.

The state has one parent state, the one below.

* State **164**

This state also has 3 children, details are written below.

* State **142**, as a result of shifting **keyword_while**
* State **143**, as a result of shifting **keyword_if**
* State **140**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_if single_arg code keyword_else **·** if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg code keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_while single_arg if_else, statement_end rscope keyword_else

## State 171

### Notes

This state preceeds a **keyword_else** symbol.

The state has one parent state, the one below.

* State **166**

This state also has 3 children, details are written below.

* State **142**, as a result of shifting **keyword_while**
* State **143**, as a result of shifting **keyword_if**
* State **148**, as a result of shifting **if_else**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | - | - | - | - | - | - |

### Items

* if_else -> keyword_if single_arg if_else keyword_else **·** if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg if_else keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg simple_stmt keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_if single_arg code keyword_else if_else, statement_end rscope keyword_else
* if_else -> **·** keyword_while single_arg if_else, statement_end rscope keyword_else

## State 172

### Notes

This state preceeds a **keyword_else** symbol.

The state has one parent state, the one below.

* State **167**

This state also has 25 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **152**, as a result of shifting **keyword_while**
* State **153**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **137**, as a result of shifting **code**
* State **138**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **139**, as a result of shifting **if**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | S1 | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* if -> keyword_if single_arg code keyword_else **·** if, statement_end rscope
* if -> keyword_if single_arg code keyword_else **·** simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg code keyword_else **·** code, statement_end rscope
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* simple_stmt -> **·** goto_stmt, statement_end
* simple_stmt -> **·** seg_stmt, statement_end
* simple_stmt -> **·** vardef, statement_end
* simple_stmt -> **·** assign, statement_end
* simple_stmt -> **·** item, statement_end
* code -> **·** lscope stmtunion rscope, statement_end rscope
* code -> **·** lscope rscope, statement_end rscope
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end
* vardef -> **·** declare_union, statement_end
* vardef -> **·** declare_union oper_assign item, statement_end
* assign -> **·** item assign_oper item, statement_end
* item -> **·** expression, statement_end oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end oper_assign
* declare_union -> **·** keyword_var sid_union, statement_end oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore

## State 173

### Notes

This state preceeds a **keyword_else** symbol.

The state has one parent state, the one below.

* State **169**

This state also has 25 children, details are written below.

* State **40**, as a result of shifting **lscope**
* State **25**, as a result of shifting **identifier**
* State **2**, as a result of shifting **keyword_shader**
* State **3**, as a result of shifting **keyword_float**
* State **4**, as a result of shifting **keyword_bool**
* State **5**, as a result of shifting **keyword_void**
* State **6**, as a result of shifting **keyword_int**
* State **7**, as a result of shifting **keyword_nat**
* State **49**, as a result of shifting **keyword_var**
* State **50**, as a result of shifting **keyword_goto**
* State **51**, as a result of shifting **keyword_seg**
* State **11**, as a result of shifting **keyword_interface**
* State **152**, as a result of shifting **keyword_while**
* State **153**, as a result of shifting **keyword_if**
* State **54**, as a result of shifting **type**
* State **55**, as a result of shifting **item**
* State **18**, as a result of shifting **location**
* State **145**, as a result of shifting **code**
* State **146**, as a result of shifting **simple_stmt**
* State **59**, as a result of shifting **goto_stmt**
* State **60**, as a result of shifting **seg_stmt**
* State **61**, as a result of shifting **vardef**
* State **62**, as a result of shifting **declare_union**
* State **63**, as a result of shifting **assign**
* State **147**, as a result of shifting **if**

### Table Row

| null_symbol | fakelparen | lparen | rparen | lscope | rscope | lbrack | rbrack | preprocessor_call | constant_number | literalized_number | constant_float | constant_text | identifier | statement_end | oper_union | oper_dot | oper_colon | oper_assign | oper_plus_assign | oper_minus_assign | oper_star_assign | oper_slash_assign | oper_percent_assign | oper_left_left_assign | oper_right_right_assign | oper_accent_assign | oper_stand_assign | oper_ampersand_assign | oper_plus | oper_minus | oper_star | oper_slash | oper_percent | oper_left_left | oper_right_right | oper_accent | oper_stand | oper_ampersand | oper_plus_plus | oper_minus_minus | oper_ampersand_ampersand | oper_stand_stand | oper_equal | oper_not_equal | oper_less_than | oper_less_than_equal | oper_greater_than | oper_greater_than_equal | keyword_shader | keyword_float | keyword_bool | keyword_void | keyword_int | keyword_nat | keyword_var | keyword_goto | keyword_seg | keyword_graphic | keyword_interface | keyword_while | keyword_if | keyword_else | keyword_underscore | start | module_space | module_item | interface | declare | type | defargs | defunion | defassignunion | lval | item | rval | single_arg | paren_oper | any_oper | fakecall | fakecall_union | call_item | union | array_access | array | location | code | stmtunion | stmt | simple_stmt | goto_stmt | seg_stmt | vardef | declare_union | sid_union | assign | assign_oper | if | if_else | shader | module | ending |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | S1 | - | S1 | - | S1 | - | - | S1 | S1 | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | S1 | - | S1 | S1 | S1 | - | - | - | - | - | - | - | - | - | - | G5 | G5 | G5 | - | - | G5 | - | - | - | - | - | - | - | - | - | - | - | - | - | - | G5 | - | G5 | G5 | G5 | G5 | G5 | G5 | - |

### Items

* if -> keyword_if single_arg if_else keyword_else **·** if, statement_end rscope
* if -> keyword_if single_arg if_else keyword_else **·** simple_stmt statement_end, statement_end rscope
* if -> keyword_if single_arg if_else keyword_else **·** code, statement_end rscope
* if -> **·** keyword_if single_arg if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else if, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else simple_stmt statement_end, statement_end rscope
* if -> **·** keyword_if single_arg if_else keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg simple_stmt statement_end keyword_else code, statement_end rscope
* if -> **·** keyword_if single_arg code keyword_else code, statement_end rscope
* if -> **·** keyword_while single_arg if, statement_end rscope
* if -> **·** keyword_while single_arg simple_stmt, statement_end rscope
* if -> **·** keyword_while single_arg code, statement_end rscope
* simple_stmt -> **·** goto_stmt, statement_end
* simple_stmt -> **·** seg_stmt, statement_end
* simple_stmt -> **·** vardef, statement_end
* simple_stmt -> **·** assign, statement_end
* simple_stmt -> **·** item, statement_end
* code -> **·** lscope stmtunion rscope, statement_end rscope
* code -> **·** lscope rscope, statement_end rscope
* goto_stmt -> **·** keyword_goto oper_colon identifier, statement_end
* seg_stmt -> **·** keyword_seg oper_colon identifier, statement_end
* vardef -> **·** declare_union, statement_end
* vardef -> **·** declare_union oper_assign item, statement_end
* assign -> **·** item assign_oper item, statement_end
* item -> **·** expression, statement_end oper_assign oper_plus_assign oper_minus_assign oper_star_assign oper_slash_assign oper_percent_assign oper_left_left_assign oper_right_right_assign oper_accent_assign oper_stand_assign oper_ampersand_assign
* declare_union -> **·** type sid_union, statement_end oper_assign
* declare_union -> **·** keyword_var sid_union, statement_end oper_assign
* type -> **·** keyword_shader, identifier keyword_underscore
* type -> **·** keyword_interface, identifier keyword_underscore
* type -> **·** keyword_bool, identifier keyword_underscore
* type -> **·** keyword_int, identifier keyword_underscore
* type -> **·** keyword_nat, identifier keyword_underscore
* type -> **·** keyword_float, identifier keyword_underscore
* type -> **·** keyword_void, identifier keyword_underscore
* type -> **·** keyword_goto, identifier keyword_underscore
* type -> **·** location, identifier keyword_underscore
* location -> **·** identifier oper_dot location, identifier keyword_underscore
* location -> **·** identifier, identifier keyword_underscore
