
# Alton

Alton is Alfie's stock implementation and also stands for
**the Alfie Language's main implementatiON**

# What's Alfie

Alfie is **A Language For Image procEssing**; Whose designed to replace system-dependent addons for
applications like [Photoshop](https://www.photoshop.com/) and [Substance Designer](https://www.substance3d.com/)

## Getting Started

These instructions will get you a copy of Alton on your system.
Note that automated builds aren't possible for us yet due to our processing power needs ( That are may not be always caused by Alton's development ).

### Prerequisites

You need to have a **C++** compiler installed on your system; we suggest the **GNU Compiler Collection ( GCC )** compiler suite on Linux and **MinGW-w32** compiler on Windows. Keep in mind that Alton is *not* limited to the GNU Compiler Collection, and can also be compiled with *CLANG* and *MSVC*. ( Not now, but will be possible in  version '01.00.00' )
You also need to have a working version of **CMake** in your path.
A working copy of **Make** is also required for compiling.

#### Linux

Just do this in a *Debian* terminal:

```bash
sudo apt-get install make g++ cmake
```

// TODO: add other distros.

#### Windows

Special thanks to the author of [This MinGW Distro](https://nuwen.net/mingw.html);
since you can simply just download the distro and use it without running into any of the weird problems that are prone to happening ( Like the original MinGW not being able to support pthread on some systems ).

You can also [get CMake from here](https://cmake.org/download/). **Make sure that you install CMake in your %PATH%, and you run the file 'set_distro_paths.bat' to put the distro inside the %PATH% environment variable.**

### Compiling

You can run either **/Path/To/Alton/Build/BuildWindows.bat** or **/Path/To/Alton/Build/BuildLinux.sh** to compile Alton for *Windows* and/or *Linux*.
*Mac* builds are currently not possible for us.

After compiling, you can find the executable at **/Path/To/Alton/Build/Windows/Alton.exe** ( for windows executables ) or **/Path/To/Alton/Build/Linux/Alton.out**  ( for linux executables ).

## Running the tests

You can run the tests by running either **/Path/To/Alton/Build/DebugWindows.bat** or **/Path/To/Alton/Build/DebugLinux.sh**, or alternatively you can run each test individually.

Tests are put in the **/Path/To/Alton/Tests/** directory, and every test is a .lfi file.

### Tests

Since lexing is the only working part of Alton, There is only 1 test file, which is located at **/Path/To/Alton/Tests/Tests.lfi**.

## Made With

* [GCC](https://gcc.gnu.org/) - The compiler stuff that we started our coding with.

* [CLANG](https://clang.llvm.org/) - The compiler that we'd like to use after a while.

* [Visual Studio Code](https://code.visualstudio.com/) - The IDE that we worked with.

* [PyPy](https://www.pypy.org/) - The stuff that's helping us deal with "Proceedural Header Generation".

* [CPython](https://www.python.org/) - The ,~-~'\*\`**Inspiration**\`\*'~-~,

* [CMake](https://cmake.org/) - Some neat compiling suite that we decided to use.

## Versioning

Note that since Alton hasn't reached basic functionality and there's no valid standardizing system put in place yet, we would rather not use versioning untill 'Some time after' finishing the basic functionalities. Now, I know that the last sentence looks kinda vague about the dates, but I can tell ya *with no promices* that this'll be done untill the next month. Too long? We're trying our best, considering that we all have to work on Alton and Alfie like a part time hobby.

Here is the versioning system that we *will* use:
**MM.SS.CC**

* MM stands for the major release. Shown ( Prefferably ) in capitalized base16.
* SS stands for the latest standard version at the time of the release. Shown ( Prefferably ) in capitalized base16.
* CC stands for commits since the major release. Shown ( Prefferably ) in capitalized base16.

### For example

The first release of Alton after 0x00 that fully complies with the *0x5F* standards would be shown like *01.5F.00*.

## Authors

* **Parsa Shahzeidi, known as Jamie Alfie** - *Project manager* - [Parsashahzeidi](https://github.com/parsashahzeidi)

## Special thanks

* To [PurpleBooth](https://github.com/PurpleBooth) for providing [the template for this README.MD file](https://github.com/PurpleBooth/a-good-readme-template) and helping me [get inspired](https://github.com/PurpleBooth/unicode-willy).

## License

This project is licensed under the **Boost Software License ( BSL )** - see the [LICENSE](LICENSE) file for more details.
