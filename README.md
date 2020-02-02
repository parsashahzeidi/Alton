
# Alton

Alton is Alfie's stock implementation and also stands for
**the Alfie Language's main implementatiON**

# What's Alfie

Alfie is **A Language For Image procEssing**; Whose designed to replace system-dependent addons for
applications like [Photoshop](https://www.photoshop.com/) and [Substance Designer](https://www.substance3d.com/)

## Getting Started

These instructions will get you a copy of Alton on your system.

### Prerequisites

You need to have a **C++** compiler installed on your system; we suggest the **GNU Compiler Collection ( GCC )** compiler suite on Linux and **MinGW-w32** compiler on Windows. Keep in mind that Alton is *not* limited to the GNU Compiler Collection, and can also be compiled with *CLANG* and *MSVC*
You also need a copy of **make**.

#### Linux

Just do this in a terminal:

```bash
sudo apt-get install make g++
```

#### Windows

Special thanks to the author of [This MinGW Distro](https://nuwen.net/mingw.html);
since you can simply just download the distro and use it without running into any of the weird problems that are prone to happening ( Like the original MinGW not being able to support threads ).

### Compiling

You can just run your version of **make** in the root folder and then you can answer the questions that are displayed.

After compiling, you can find the executable at **/Path/To/Alton/bin/windows/Alton.exe** ( for windows executables ) or **/Path/To/Alton/bin/linux/Alton**  ( for linux executables ).

## Running the tests

You can run the tests by doing `make do_tests` at the root directory, or alternatively you can run each test individually.

Tests are put in the **/Path/To/Alton/tests/** directory, and every test is a .lfi file.

### Tests

Ehh...
// TODO

## Made With

* [GCC](https://gcc.gnu.org/) - The compiler stuff that we first started coding with

* [CLANG](https://clang.llvm.org/) - The compiler that we'd like to use after a while

* [Visual Studio Code](https://code.visualstudio.com/) - The IDE we coded with

## Versioning

Here is the versioning system that we use:
**MM.SS.CC**

* MM stands for the major release. Displayed in hex.
* SS stands for the latest standard version at the time of the release. Displayed in hex.
* CC stands for commits since the major release. Displayed in hex.

**For example:**
The first release of Alton after 0x00 and with the *0x5F* standard would be shown like *01.5F.00*

## Authors

* **Parsa Shaheidi** - *Initial work* - [Parsashahzeidi](https://github.com/parsashahzeidi)

## License

This project is licensed under the **Boost Software License** - see the [LICENSE](LICENSE) file for details
