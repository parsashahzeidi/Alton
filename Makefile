cxx_lin = g++-9
cxx_win = wine ~/Apps/MINGW/MinGW/bin/g++.exe

ext_lin = .out
ext_win = .exe
ext_ast = .o

cls_win = cls
cls_lin = clear

pause_win = pause
pause_lin = echo "Press the Enter button to exit..." && read nil

console_win = cmd
console_lin = konsole

cxx = $(cxx_lin)
ext = $(ext_lin)
cls = $(cls_lin)
pause = $(pause_lin)
console = $(console_lin)

args = -I. -m64 -std=c++17 -Wpedantic -Werror -pthread
dbg_prms = -O0 -g -pg
lnk_prms = -Ofast -c -lpthread
bld_prms = -Ofast

ignore_error = ; echo -n ""
ignore_output = > temp.tmp

first: build

build: bld
debug: dbg

.PHONY:bld
bld: directories
	@ $(cxx_lin) $(args) $(bld_prms) ./cache/Alton$(ext_ast) -o ./bin/linux/Alton$(ext_lin)
	@ $(cxx_win) $(args) $(bld_prms) ./cache/Alton$(ext_ast) -o ./bin/windows/Alton$(ext_win)

.PHONY:dbg
dbg: directories
	@ $(cxx) $(args) $(dbg_prms) ./Alton.cpp -o ./bin/debug/Alton$(ext)

.PHONY:_run_debug
_run_debug: dbg
	@ $(cls)
	@ valgrind --leak-check=full --show-leak-kinds=all ./bin/debug/Alton$(ext) -i=./Tests/Tests.lfi $(ignore_error)
	@ rm ./gmon.out $(ignore_output) $(ignore_error)
	@ $(pause)

run_debug: dbg
	@ $(console) -e bash -c "make _run_debug; read" $(ignore_output)

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
