cxx_lin = g++
cxx_win = wine ~/Apps/MINGW/MinGW/bin/g++.exe

ext_lin = .out
ext_win = .exe
ext_ast = .o

cxx = $(cxx_lin)
ext = $(ext_lin)

args = -I. -m64 -std=c++17 -Wpedantic -Werror -pthread
dbg_prms = -O0 -g -pg
lmk_prms = -Ofast -c -lpthread
bld_prms = -Ofast

first: build

build: bld
debug: dbg

.PHONY:bld
bld: directories
	@ $(cxx) 	 $(args) $(lnk_prms) ./Alton.cpp			 -o ./cache/Alton$(ext_ast)
	@ $(cxx_lin) $(args) $(bld_prms) ./cache/Alton$(ext_ast) -o ./bin/linux/Alton$(ext_lin)
	@ $(cxx_win) $(args) $(bld_prms) ./cache/Alton$(ext_ast) -o ./bin/windows/Alton$(ext_win)

.PHONY:dbg
dbg: directories
	@ $(cxx) $(args) $(dbg_prms) ./Alton.cpp -o ./bin/debug/Alton$(ext)

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
