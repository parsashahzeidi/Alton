# Building

These instructions will compile a working version of Alton on your system with [GNU Make], [CMake], and [Python 3].

## Prerequisites

You need to have a **C++** compiler installed on your system; I'd say that **Clang** on GNU/Linux and MacOS, and **MinGW-w32** on Windows are the most well suited tools on the noted platforms for compiling Alton. Keep in mind that Alton is *not* limited to these compilers, and can be compiled with *any compiler that supports proper C++17 / C++2a* and *any operating system that has a libc implementation and is POSIX complaint*. You also need copies of [GNU Make][GNUMakeLink], [CMake][CMakeLink], and a working [Python 3][PythonLink] distro.

### Linux

Just do this in a *Debian* terminal:

```bash
sudo apt-get install git make clang cmake python3
```

TODO: add instructions for other distros.

### Windows

If you don't have MinGW or Git, grab yourself one.
[This one][NuwenMinGW].
You can also [get CMake from here][CMakeLink]. **Make sure that CMake, Git, Make, and G++, are accessible within your _%path%_ environment variable.**

## Compiling

### GNU/linux

#### Step 1.1

Do some regular Git / CMake stuff.

```bash
git clone https://github.com/parsashahzeidi/Alton.git Alton
cd Alton

mkdir build && cd build

cmake ./../ -G "Unix Makefiles" && make -j5
```

Note that you can alternatively use [Ninja][NinjaLink] to do your makes.

#### Step 1.2

Done. It's thaaat easy!! You can run Alton's daemon with the executable *daemon*, and then you can do as you would normally do.

### Microsoft Windows

Windows has a considerably greater tutorial length, so hold on to your pants and lets jump in.

#### Step 2.1

[Clone Alton from the repository](https://github.com/parsashahzeidi/Alton), and unzip it.

#### Step 2.2

Open up CMake GUI, Locate the folder, then hit *Configure*, *Generate*, and *Open Project* in order.

### Step 2.3

Open a CMD window in the folder that just opened, then just write `make -j5` in the terminal.

#### Step 2.4

Done. Again, It's thaaat easy!! Alton's daemon executable is named *daemon.exe*, and you can figure out how to operate Alton in the wiki.

## Tests

Since *lexing* and *parsing* are the only working parts of Alton, There is only 1 test file that's publicly available, whom is located at **/Path/To/Alton/Tests/Tests.lfi**. There'll be more in that folder when we require more.

[NuwenMinGW]: https://nuwen.net/mingw.html
[NinjaLink]: https://ninja-build.org/
[GNUMakeLink]: https://www.gnu.org/software/make/
[CMakeLink]: https://cmake.org/
[PythonLink]: https://www.python.org/
