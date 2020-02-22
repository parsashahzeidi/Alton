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
pause_lin = echo "Press the Enter button to exit..." && read nil

console_win = wine cmd -c
console_lin = konsole -e

cxx = $(cxx_lin)
ld = $(ld_lin)
ext = $(ext_lin)
cls = $(cls_lin)
pause = $(pause_lin)
console = $(console_lin)

args = -I.
dbg_prms = -O0 	  -g -pg		-m64 -std=c++2a -Wpedantic -Werror -pthread
lnk_prms = -Ofast -lpthread -c 	-m64 -std=c++2a -Wpedantic -Werror -pthread
bld_prms = -Ofast				-melf_x86_64

ignore_error = ; echo -n ""
ignore_output = > temp.tmp

first: build

build: bld
debug: dbg

.PHONY:bld
bld: directories
	@ $(cxx)	$(args) $(lnk_prms) ./Alton.cpp			 -o ./cache/Alton$(ext_asm)
	@ $(ld_lin)	$(args) $(bld_prms) ./cache/Alton$(ext_asm) -o ./bin/linux/Alton$(ext_lin)

.PHONY:dbg
dbg: directories
	@ $(cxx) $(args) $(dbg_prms) ./Alton.cpp -o ./bin/debug/Alton$(ext)

.PHONY:_run_debug
_run_debug:
	@ $(cls)
	@ make debug && valgrind --leak-check=full --show-leak-kinds=all ./bin/debug/Alton$(ext) -i=./Tests/Tests.lfi $(ignore_error)
	@ rm ./gmon.out $(ignore_output) $(ignore_error)
	@ $(pause)

run_debug:
	@ $(console) "make _run_debug"

.PHONY:clean
clean:
	@ mkdir -p ./bin/
	@ mkdir -p ./cache/
	@ rm -r ./bin/
	@ rm -r ./cache/

.PHONY:directories
directories:
	@ mkdir -p ./cache/
	@ mkdir -p ./bin/
	@ mkdir -p ./bin/debug/
	@ mkdir -p ./bin/windows/
	@ mkdir -p ./bin/linux/
