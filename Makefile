cxx_lin = g++
cxx_win = wine ~/Apps/MINGW/MinGW/bin/g++.exe

cxx = $(cxx_lin)
ext = 

params = -I../ -m64 -std=c++17 -Wpedantic -Werror -pthread
dbg_prms = -O0 -g
cmp_prms = -Ofast

.PHONY:dbg
dbg:
	@ $(cxx) $(params) $(dbg_prms) ./Alton.cpp -o ./bin/debug/alton$(ext)
