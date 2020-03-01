# TODO: Add versioning
cxx_lin = g++-9
cxx_win = wine ~/Apps/MINGW/MinGW/bin/g++.exe

ld_lin = ld

ext_lin = .out
ext_win = .exe
ext_ast = .o
ext_asm = .asm

cls_win = cls
cls_lin = clear

pause_win = pause
pause_lin = echo "Press the Enter button to exit..." && read tmp

console_win = wine cmd -c
console_lin = konsole -e

cxx = $(cxx_lin)
ld = $(ld_lin)
ext = $(ext_lin)
cls = $(cls_lin)
pause = $(pause_lin)
console = $(console_lin)

args = -I.
dbg_prms = -O0 	  -g -pg			 -std=c++2a -Wpedantic -Werror -pthread
lnk_prms = -Ofast -lpthread -c 	-m64 -std=c++2a -Wpedantic -Werror -pthread
bld_prms = -Ofast					 -std=c++2a -Wpedantic -Werror -pthread

ignore_error = ; echo -n ""
ignore_output = > temp.tmp

announce = echo -n "\033[32;1m" && echo -n
announce_end = && echo "\033[0m"

first: build

build: bld
debug: dbg

.PHONY:bld
bld: generate_directories generate_headers
	@ $(announce) "Compiling exportable builds for linux" $(announce_end)
	@ $(cxx_lin)	$(args) $(lnk_prms) ./Alton.cpp						-o ./Build/cache/Alton_ld_lin$(ext_ast)
	@ $(announce) "Compiling exportable builds for windows" $(announce_end)
	@ $(cxx_win)	$(args) $(lnk_prms) ./Alton.cpp						-o ./Build/cache/Alton_ld_win$(ext_ast)

	@ $(announce) "Linking exportable builds for linux" $(announce_end)
	@ $(cxx_lin)	$(args) $(bld_prms) ./Build/cache/Alton_ld_lin$(ext_ast)	-o ./Build/bin/linux/Alton$(ext_lin)
	@ $(announce) "Linking exportable builds for windows" $(announce_end)
	@ $(cxx_win)	$(args) $(bld_prms) ./Build/cache/Alton_ld_win$(ext_ast)	-o ./Build/bin/linux/Alton$(ext_win)

.PHONY:dbg
dbg: generate_directories generate_headers
	@ $(announce) "Compiling debug builds" $(announce_end)
	@ $(cxx) $(args) $(dbg_prms) ./Alton.cpp -o ./Build/bin/debug/Alton$(ext)

.PHONY:_run_debug
_run_debug:
	@ $(cls)
	@ make debug 
	@ $(announce) "Launching valgrind" $(announce_end)
	@ valgrind --track-origins=yes --leak-check=full --show-leak-kinds=all ./Build/bin/debug/Alton$(ext) -i=./Tests/Tests.lfi $(ignore_error)
	@ rm ./gmon.out $(ignore_output) $(ignore_error)
	@ $(pause)

run_debug:
	@ $(announce) "Launching a console instance" $(announce_end)
	@ $(console) "make _run_debug"

.PHONY:clean
clean:
	@ rm -r ./Build/bin/ $(ignore_error)
	@ rm -r ./Build/cache/ $(ignore_error)

.PHONY:generate_directories
generate_directories:
	@ $(announce) "Creating directories" $(announce_end)
	@ mkdir -p ./Build/cache/
	@ mkdir -p ./Build/bin/
	@ mkdir -p ./Build/bin/debug/
	@ mkdir -p ./Build/bin/windows/
	@ mkdir -p ./Build/bin/linux/

.PHONY:generate_headers
generate_headers:
	@ $(announce) "Synthesizing proceedural headers" $(announce_end)
	@ pypy3 ./Lexer/_Generation/TokenHeaderGenerator.py

