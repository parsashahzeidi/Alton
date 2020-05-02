// This file was synthesized by /Path/To/Alton/Tools/Instructions/LexedTree/TokenHeaderGenerator.py

# pragma once

// --- Versioning ---
// -- The major release's index --
# ifdef ALFIE_MAJOR_VERSION
	# undef ALFIE_MAJOR_VERSION
# endif /*ALFIE_MAJOR_VERSION*/
# define ALFIE_MAJOR_VERSION 0x00  // First


// -- The major release's name --
# ifdef ALTON_RELEASE_NAME
	# undef ALTON_RELEASE_NAME
# endif /*ALFIE_MAJOR_VERSION*/
# define ALTON_RELEASE_NAME U"The Emptyness"  // Second


// -- The standard that this build complies with --
# ifdef ALTON_REVISION
	# undef ALTON_REVISION
# endif /*ALTON_REVISION*/
# define ALTON_REVISION 0x00  // Third


// -- The number of commits after the major release --
# ifdef ALTON_COMMIT_NUMBER
	# undef ALTON_COMMIT_NUMBER
# endif /*ALTON_COMMIT_NUMBER*/
# define ALTON_COMMIT_NUMBER 0x09  // Fourth


// -- The Postfix of the version --
# ifdef ALTON_VERSION_POSTFIX
	# undef ALTON_VERSION_POSTFIX
# endif /*ALTON_VERSION_POSTFIX*/
# define ALTON_VERSION_POSTFIX U"CV1"  // Fifth


// --- Build timing ---
// -- Major timings --
// - Year -
# ifdef ALTON_BUILD_TIME_YEAR
	# undef ALTON_BUILD_TIME_YEAR
# endif /*ALTON_BUILD_TIME_YEAR*/
# define ALTON_BUILD_TIME_YEAR 2020  // Sixth

// - Month -
# ifdef ALTON_BUILD_TIME_MONTH
	# undef ALTON_BUILD_TIME_MONTH
# endif /*ALTON_BUILD_TIME_MONTH*/
# define ALTON_BUILD_TIME_MONTH 5  // Seventh

// - Day -
# ifdef ALTON_BUILD_TIME_DAY
	# undef ALTON_BUILD_TIME_DAY
# endif /*ALTON_BUILD_TIME_DAY*/
# define ALTON_BUILD_TIME_DAY 2  // Eigth


// -- Minor timings --
// - Hour -
# ifdef ALTON_BUILD_TIME_HOUR
	# undef ALTON_BUILD_TIME_HOUR
# endif /*ALTON_BUILD_TIME_HOUR*/
# define ALTON_BUILD_TIME_HOUR 15  // Ninth

// - Minute -
# ifdef ALTON_BUILD_TIME_MINUTE
	# undef ALTON_BUILD_TIME_MINUTE
# endif /*ALTON_BUILD_TIME_MINUTE*/
# define ALTON_BUILD_TIME_MINUTE 25  // Tenth

// - Second -
# ifdef ALTON_BUILD_TIME_SECOND
	# undef ALTON_BUILD_TIME_SECOND
# endif /*ALTON_BUILD_TIME_SECOND*/
# define ALTON_BUILD_TIME_SECOND 43  // Eleventh!



// --- Build Platform ---
// -- The System's Version Info --
// - The System's Operating System -
# ifdef ALTON_OS
	# undef ALTON_OS
# endif /*ALTON_OS*/

# ifndef ALTON_OS_TEXT
	# undef ALTON_OS_TEXT
# endif /*ALTON_OS_TEXT*/

// Twelveth
# define OS_LINUX 0
# define OS_SUN 1
# define OS_BSD 2
# define OS_MAC 3
# define OS_WINDOWS 4
# define OS_AIX 5
# define OS_ANDROID 6
# define OS_AMDAHL_UTS 7
# define OS_AMIGA 8
# define OS_APOLLO_AEGIS 9
# define OS_APOLLO 10
# define OS_BEOS 11
# define OS_BLUE_GENE 12
# define OS_CONVEX 13
# define OS_DGUX 14
# define OS_DYNIX 15
# define OS_ECOS 16
# define OS_DOS 17
# define OS_GNU 18
# define OS_HIUX_MPP 19
# define OS_HPUX 20
# define OS_IBM_400 21
# define OS_INTEGRITY 22
# define OS_IRIX 23
# define OS_LINX 24
# define OS_OS9 25
# define OS_MINIX 26
# define OS_MORPHOS 27
# define OS_MPE 28
# define OS_NUCLEUS 29
# define OS_OS2 30
# define OS_PALM 31
# define OS_PLAN9 32
# define OS_DC_OSX 33
# define OS_QNX 34
# define OS_SCO_OS 35
# define OS_VOS 36
# define OS_SYLLABLE 37
# define OS_SYMBIAN 38
# define OS_OSF1 39
# define OS_UNICOS 40
# define OS_VMS 41
# define OS_VXWORKS 42
# define OS_IBM_ZOS 43
# define OS_UNIX_BASED 44

// Thirteenth
# if defined(linux) || defined(__linux) || defined(__linux__) || defined(__gnu_linux__)
	# define ALTON_OS OS_LINUX
	# define ALTON_OS_TEXT U"Linux"

# elif defined(sun) || defined(__sun)
	# define ALTON_OS OS_SUN
	# define ALTON_OS_TEXT U"SunOS"

# elif defined(BSD) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__bsdi__) || defined(_SYSTYPE_BSD) || defined(__FreeBSD_kernel__) || defined(__FreeBSD_version) || defined(__NetBSD_Version__)
	# define ALTON_OS OS_BSD
	# define ALTON_OS_TEXT U"BSD"

# elif defined(__MACOSX__) || defined(__APPLE__) || defined(macintosh) || defined(Macintosh) || defined(__MACH__)
	# define ALTON_OS OS_MAC
	# define ALTON_OS_TEXT U"MacOS"

# elif defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__WIN64__) || defined(WIN32) || defined(WIN64) || defined(_MSC_VER) || defined(__CYGWIN__) || defined(__TOS_WIN__) || defined(__WINDOWS__) || defined(_WIN16) || defined(_WIN32_WCE) || defined(_WIN32_WCE)
	# define ALTON_OS OS_WINDOWS
	# define ALTON_OS_TEXT U"Windows"

# elif defined(_AIX) || defined(__TOS_AIX__)
	# define ALTON_OS OS_AIX
	# define ALTON_OS_TEXT U"AIX"

# elif defined(__ANDROID__) || defined(__ANDROID_API__)
	# define ALTON_OS OS_ANDROID
	# define ALTON_OS_TEXT U"Android"

# elif defined(UTS)
	# define ALTON_OS OS_AMDAHL_UTS
	# define ALTON_OS_TEXT U"AmdahlUTS"

# elif defined(AMIGA) || defined(__amigaos__)
	# define ALTON_OS OS_AMIGA
	# define ALTON_OS_TEXT U"AmigaOS"

# elif defined(aegis)
	# define ALTON_OS OS_APOLLO_AEGIS
	# define ALTON_OS_TEXT U"ApolloAEGIS"

# elif defined(apollo)
	# define ALTON_OS OS_APOLLO
	# define ALTON_OS_TEXT U"ApolloOS"

# elif defined(__BEOS__)
	# define ALTON_OS OS_BEOS
	# define ALTON_OS_TEXT U"BeOS"

# elif defined(__bg__) || defined(__bgq__) || defined(__THW_BLUEGENE__) || defined(__TOS_BGQ__)
	# define ALTON_OS OS_BLUE_GENE
	# define ALTON_OS_TEXT U"BlueGene"

# elif defined(__convex__)
	# define ALTON_OS OS_CONVEX
	# define ALTON_OS_TEXT U"ConvexOS"

# elif defined(DGUX) || defined(__DGUX__) || defined(__dgux__)
	# define ALTON_OS OS_DGUX
	# define ALTON_OS_TEXT U"DG-UX"

# elif defined(_SEQUENT_) || defined(sequent)
	# define ALTON_OS OS_DYNIX
	# define ALTON_OS_TEXT U"Dynix"

# elif defined(__ECOS)
	# define ALTON_OS OS_ECOS
	# define ALTON_OS_TEXT U"eCos"

# elif defined(__EMX__) || defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(__DOS__)
	# define ALTON_OS OS_DOS
	# define ALTON_OS_TEXT U"Dos"

# elif defined(__GNU__) || defined(__gnu_hurd__)
	# define ALTON_OS OS_GNU
	# define ALTON_OS_TEXT U"Gnu"

# elif defined(__hiuxmpp)
	# define ALTON_OS OS_HIUX_MPP
	# define ALTON_OS_TEXT U"HI-UX-MPP"

# elif defined(_hpux) || defined(hpux) || defined(__hpux)
	# define ALTON_OS OS_HPUX
	# define ALTON_OS_TEXT U"HP-UX"

# elif defined(__OS400__)
	# define ALTON_OS OS_IBM_400
	# define ALTON_OS_TEXT U"OS400"

# elif defined(__INTEGRITY)
	# define ALTON_OS OS_INTEGRITY
	# define ALTON_OS_TEXT U"Integrity"

# elif defined(sgi) || defined(__sgi)
	# define ALTON_OS OS_IRIX
	# define ALTON_OS_TEXT U"Irix"

# elif defined(__Lynx__)
	# define ALTON_OS OS_LINX
	# define ALTON_OS_TEXT U"LynxOS"

# elif defined(__OS9000) || defined(_OSK)
	# define ALTON_OS OS_OS9
	# define ALTON_OS_TEXT U"OS9"

# elif defined(__minix)
	# define ALTON_OS OS_MINIX
	# define ALTON_OS_TEXT U"Minix"

# elif defined(__MORPHOS__)
	# define ALTON_OS OS_MORPHOS
	# define ALTON_OS_TEXT U"MorphOS"

# elif defined(mpeix) || defined(__mpexl)
	# define ALTON_OS OS_MPE
	# define ALTON_OS_TEXT U"MPE-Ix"

# elif defined(__nucleus__)
	# define ALTON_OS OS_NUCLEUS
	# define ALTON_OS_TEXT U"Nucleus-RTOS"

# elif defined(OS2) || defined(_OS2) || defined(__OS2__) || defined(__TOS_OS2__)
	# define ALTON_OS OS_OS2
	# define ALTON_OS_TEXT U"OS2"

# elif defined(__palmos__)
	# define ALTON_OS OS_PALM
	# define ALTON_OS_TEXT U"PalmOS"

# elif defined(EPLAN9)
	# define ALTON_OS OS_PLAN9
	# define ALTON_OS_TEXT U"Plan-9"

# elif defined(pyr)
	# define ALTON_OS OS_DC_OSX
	# define ALTON_OS_TEXT U"DC-OSx"

# elif defined(__QNX__) || defined(__QNXNTO__) || defined(_NTO_VERSION) || defined(BBNDK_VERSION_CURRENT)
	# define ALTON_OS OS_QNX
	# define ALTON_OS_TEXT U"QNX"

# elif defined(M_I386) || defined(M_XENIX) || defined(_SCO_DS)
	# define ALTON_OS OS_SCO_OS
	# define ALTON_OS_TEXT U"SCO-OpenServer"

# elif defined(__VOS__)
	# define ALTON_OS OS_VOS
	# define ALTON_OS_TEXT U"VOS"

# elif defined(__SYLLABLE__)
	# define ALTON_OS OS_SYLLABLE
	# define ALTON_OS_TEXT U"Syllable"

# elif defined(__SYMBIAN32__)
	# define ALTON_OS OS_SYMBIAN
	# define ALTON_OS_TEXT U"SymbianOS"

# elif defined(__osf__) || defined(__osf)
	# define ALTON_OS OS_OSF1
	# define ALTON_OS_TEXT U"Tru64"

# elif defined(_UNICOS) || defined(_CRAY) || defined(__crayx1)
	# define ALTON_OS OS_UNICOS
	# define ALTON_OS_TEXT U"UnicOS"

# elif defined(VMS) || defined(__VMS) || defined(__VMS_VER)
	# define ALTON_OS OS_VMS
	# define ALTON_OS_TEXT U"VMS"

# elif defined(__VXWORKS__) || defined(__vxworks) || defined(_WRS_VXWORKS_MAJOR) || defined(_WRS_VXWORKS_MINOR) || defined(_WRS_VXWORKS_MAINT) || defined(__RTP__) || defined(_WRS_KERNEL)
	# define ALTON_OS OS_VXWORKS
	# define ALTON_OS_TEXT U"VxWorks"

# elif defined(__MVS__) || defined(__HOS_MVS__) || defined(__TOS_MVS__)
	# define ALTON_OS OS_IBM_ZOS
	# define ALTON_OS_TEXT U"Z-OS"

# elif defined(__INTERIX) || defined(sinux) || defined(__sysv__) || defined(__SVR4) || defined(__svr4__) || defined(_SYSTYPE_SVR4) || defined(ultrix) || defined(__ultrix) || defined(__ultrix__) || defined(__unix__) || defined(__unix) || defined(unix) || defined(sco) || defined(_UNIXWARE7) || defined(_UWIN) || defined(_WINDU_SOURCE)
	# define ALTON_OS OS_UNIX_BASED
	# define ALTON_OS_TEXT U"Unix-Subsystem"

# else
	# error This operating system is not recognised by Alton.\
			Please modify /Path/To/Alton/ETC/_Generation/ExampleVersionData.hpp.
# endif

// - The System's CPU Architecture -
# ifdef ALTON_ARCH
	# undef ALTON_ARCH
# endif /*ALTON_ARCH*/

# ifdef ALTON_ARCH_TEXT
	# undef ALTON_ARCH_TEXT
# endif /*ALTON_ARCH_TEXT*/

// Fourteenth
# define ARCH_ALPHA 0
# define ARCH_X86_64 1
# define ARCH_ARM 2
# define ARCH_ARM64 3
# define ARCH_BFIN 4
# define ARCH_CONVEX 5
# define ARCH_EPIPHANY 6
# define ARCH_HPPA 7
# define ARCH_I386 8
# define ARCH_IA64 9
# define ARCH_M68K 10
# define ARCH_MIPS 11
# define ARCH_PPC 12
# define ARCH_PYR 13
# define ARCH_POWER 14
# define ARCH_SPARC 15
# define ARCH_SH 16
# define ARCH_ZARCH 17
# define ARCH_TMS320 18
# define ARCH_TMS470 19

// Fifteenth
# if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
	# define ALTON_ARCH ARCH_ALPHA
	# define ALTON_ARCH_TEXT U"Alpha"

# elif defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || defined(_M_AMD64)
	# define ALTON_ARCH ARCH_X86_64
	# define ALTON_ARCH_TEXT U"AMD64"

# elif defined(__arm__) || defined(__thumb__) || defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB) || defined(_ARM) || defined(_M_ARM) || defined(_M_ARMT) || defined(__arm)
	# define ALTON_ARCH ARCH_ARM
	# define ALTON_ARCH_TEXT U"ARM"

# elif defined(__aarch64__)
	# define ALTON_ARCH ARCH_ARM64
	# define ALTON_ARCH_TEXT U"ARM64"

# elif defined(__bfin) || defined(__BFIN__)
	# define ALTON_ARCH ARCH_BFIN
	# define ALTON_ARCH_TEXT U"Blackfin"

# elif defined(__convex__)
	# define ALTON_ARCH ARCH_CONVEX
	# define ALTON_ARCH_TEXT U"Convex"

# elif defined(__epiphany__)
	# define ALTON_ARCH ARCH_EPIPHANY
	# define ALTON_ARCH_TEXT U"Epiphany"

# elif defined(__hppa__) || defined(__HPPA__) || defined(__hppa)
	# define ALTON_ARCH ARCH_HPPA
	# define ALTON_ARCH_TEXT U"HP/PA"

# elif defined(i386) || defined(__i386) || defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__) || defined(__IA32__) || defined(_M_I86) || defined(_M_IX86) || defined(_M_IX86) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__) || defined(__386)
	# define ALTON_ARCH ARCH_I386
	# define ALTON_ARCH_TEXT U"Intelx86"

# elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
	# define ALTON_ARCH ARCH_IA64
	# define ALTON_ARCH_TEXT U"IntelItanium"

# elif defined(__m68k__) || defined(M68000) || defined(__MC68K__)
	# define ALTON_ARCH ARCH_M68K
	# define ALTON_ARCH_TEXT U"Motorola68k"

# elif defined(__mips__) || defined(mips) || defined(_MIPS_ISA) || defined(_R3000) || defined(_R4000) || defined(_R5900) || defined(__mips) || defined(__MIPS__)
	# define ALTON_ARCH ARCH_MIPS
	# define ALTON_ARCH_TEXT U"MIPS"

# elif defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || defined(__POWERPC__) || defined(__ppc__) || defined(__ppc64__) || defined(__PPC__) || defined(__PPC64__) || defined(_ARCH_PPC) || defined(_ARCH_PPC64) || defined(_M_PPC) || defined(__PPCGECKO__) || defined(__PPCBROADWAY__) || defined(_XENON) || defined(__ppc)
	# define ALTON_ARCH ARCH_PPC
	# define ALTON_ARCH_TEXT U"IBM-PowerPC"

# elif defined(pyr)
	# define ALTON_ARCH ARCH_PYR
	# define ALTON_ARCH_TEXT U"Pyramid-9810"

# elif defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) || defined(_ARCH_PWR) || defined(_ARCH_PWR2) || defined(_ARCH_PWR3) || defined(_ARCH_PWR4)
	# define ALTON_ARCH ARCH_POWER
	# define ALTON_ARCH_TEXT U"RS/6000"

# elif defined(__sparc__) || defined(__sparc) || defined(__sparc_v8__) || defined(__sparc_v9__) || defined(__sparcv8) || defined(__sparcv9)
	# define ALTON_ARCH ARCH_SPARC
	# define ALTON_ARCH_TEXT U"Sparc"

# elif defined(__sh__) || defined(__sh1__) || defined(__sh2__) || defined(__sh3__) || defined(__SH3__) || defined(__SH4__) || defined(__SH5__)
	# define ALTON_ARCH ARCH_SH
	# define ALTON_ARCH_TEXT U"SuperH"

# elif defined(__370__) || defined(__THW_370__) || defined(__s390__) || defined(__s390x__) || defined(__zarch__) || defined(__SYSC_ZARCH__)
	# define ALTON_ARCH ARCH_ZARCH
	# define ALTON_ARCH_TEXT U"SystemZ"

# elif defined(_TMS320C2XX) || defined(__TMS320C2000__) || defined(_TMS320C5X) || defined(__TMS320C55X__) || defined(_TMS320C6X) || defined(__TMS320C6X__)
	# define ALTON_ARCH ARCH_TMS320
	# define ALTON_ARCH_TEXT U"TMS320"

# elif defined(__TMS470__)
	# define ALTON_ARCH ARCH_TMS470
	# define ALTON_ARCH_TEXT U"TMS470"

# else
	# error This architecture is not recognised by Alton.\
			Please modify /Path/To/Alton/ETC/_Generation/ExampleVersionData.hpp.
# endif

// Sixteenth
# define COMPILER_ACC 0
# define COMPILER_CMB 1
# define COMPILER_CHC 2
# define COMPILER_ACK 3
# define COMPILER_ARM 4
# define COMPILER_AZTEC 5
# define COMPILER_BORLAND 6
# define COMPILER_CC65 7
# define COMPILER_CLANG 8
# define COMPILER_COMEAU 9
# define COMPILER_COMPAQ 10
# define COMPILER_CONVEXC 11
# define COMPILER_COMPCERT 12
# define COMPILER_COVERITY 13
# define COMPILER_CRAYC 14
# define COMPILER_DIABC 15
# define COMPILER_DICEC 16
# define COMPILER_DM 17
# define COMPILER_DSC 18
# define COMPILER_DJGPP 19
# define COMPILER_EDGC 20
# define COMPILER_EKOPATH 21
# define COMPILER_FUJITSUC 22
# define COMPILER_GNUC 23
# define COMPILER_GREENHILL 24
# define COMPILER_HPANSI 25
# define COMPILER_HPAC 26
# define COMPILER_IARC 27
# define COMPILER_IBMXLC 28
# define COMPILER_IMAGECRAFT 29
# define COMPILER_INTELC 30
# define COMPILER_KAIC 31
# define COMPILER_KEILARM 32
# define COMPILER_KEIL166 33
# define COMPILER_KEIL51 34
# define COMPILER_LCC 35
# define COMPILER_METAWARE 36
# define COMPILER_METROWERKS 37
# define COMPILER_MSVC 38
# define COMPILER_MICROTEC 39
# define COMPILER_MICROWAY 40
# define COMPILER_MIPSPRO 41
# define COMPILER_MIRACLEC 42
# define COMPILER_MPWC 43
# define COMPILER_NOROCROFTC 44
# define COMPILER_NWCC 45
# define COMPILER_OPEN64 46
# define COMPILER_ORACLEC 47
# define COMPILER_OSS 48
# define COMPILER_PACIFICC 49
# define COMPILER_PALMC 50
# define COMPILER_POCC 51
# define COMPILER_PORTLANDC 52
# define COMPILER_RENESASC 53
# define COMPILER_SASC 54
# define COMPILER_SCODS 55
# define COMPILER_SDC 56
# define COMPILER_SNC 57
# define COMPILER_VOSC 58
# define COMPILER_TENDRAC 59
# define COMPILER_SYMANTEC 60
# define COMPILER_TIC 61
# define COMPILER_THINKC 62
# define COMPILER_TINYC 63
# define COMPILER_TURBOC 64
# define COMPILER_ULTIMATEC 65
# define COMPILER_USLC 66
# define COMPILER_VBCC 67
# define COMPILER_WATCOM 68
# define COMPILER_ZTC 69

// Seventeenth
# if defined(_ACC_)
	# define ALTON_COMPILER COMPILER_ACC
	# define ALTON_COMPILER_TEXT U"ACC"

# elif defined(__CMB__)
	# define ALTON_COMPILER COMPILER_CMB
	# define ALTON_COMPILER_TEXT U"AltiumMicroBlazeC"

# elif defined(__CHC__)
	# define ALTON_COMPILER COMPILER_CHC
	# define ALTON_COMPILER_TEXT U"AltiumCToHardware"

# elif defined(__ACK__)
	# define ALTON_COMPILER COMPILER_ACK
	# define ALTON_COMPILER_TEXT U"AmsterdamCompilerKit"

# elif defined(__CC_ARM)
	# define ALTON_COMPILER COMPILER_ARM
	# define ALTON_COMPILER_TEXT U"ARMCompiler"

# elif defined(AZTEC_C) || defined(__AZTEC_C__)
	# define ALTON_COMPILER COMPILER_AZTEC
	# define ALTON_COMPILER_TEXT U"AztecC"

# elif defined(__BORLANDC__) || defined(__CODEGEARC__)
	# define ALTON_COMPILER COMPILER_BORLAND
	# define ALTON_COMPILER_TEXT U"BorlandC"

# elif defined(__CC65__)
	# define ALTON_COMPILER COMPILER_CC65
	# define ALTON_COMPILER_TEXT U"CC65"

# elif defined(__clang__)
	# define ALTON_COMPILER COMPILER_CLANG
	# define ALTON_COMPILER_TEXT U"Clang"

# elif defined(__COMO__)
	# define ALTON_COMPILER COMPILER_COMEAU
	# define ALTON_COMPILER_TEXT U"ComeauC"

# elif defined(__DECC) || defined(__DECCXX) || defined(__VAXC) || defined(VAXC)
	# define ALTON_COMPILER COMPILER_COMPAQ
	# define ALTON_COMPILER_TEXT U"CompaqC"

# elif defined(__convexc__)
	# define ALTON_COMPILER COMPILER_CONVEXC
	# define ALTON_COMPILER_TEXT U"ConvexC"

# elif defined(__COMPCERT__)
	# define ALTON_COMPILER COMPILER_COMPCERT
	# define ALTON_COMPILER_TEXT U"CompCert"

# elif defined(__COVERITY__)
	# define ALTON_COMPILER COMPILER_COVERITY
	# define ALTON_COMPILER_TEXT U"CoverityC"

# elif defined(_CRAYC)
	# define ALTON_COMPILER COMPILER_CRAYC
	# define ALTON_COMPILER_TEXT U"CrayC"

# elif defined(__DCC__)
	# define ALTON_COMPILER COMPILER_DIABC
	# define ALTON_COMPILER_TEXT U"DiabC"

# elif defined(_DICE)
	# define ALTON_COMPILER COMPILER_DICEC
	# define ALTON_COMPILER_TEXT U"DiceC"

# elif defined(__DMC__)
	# define ALTON_COMPILER COMPILER_DM
	# define ALTON_COMPILER_TEXT U"DigitalMars"

# elif defined(__SYSC__)
	# define ALTON_COMPILER COMPILER_DSC
	# define ALTON_COMPILER_TEXT U"DignusSystemsC"

# elif defined(__DJGPP__) || defined(__GO32__)
	# define ALTON_COMPILER COMPILER_DJGPP
	# define ALTON_COMPILER_TEXT U"DJGPP"

# elif defined(__EDG__)
	# define ALTON_COMPILER COMPILER_EDGC
	# define ALTON_COMPILER_TEXT U"EDGC"

# elif defined(__PATHCC__)
	# define ALTON_COMPILER COMPILER_EKOPATH
	# define ALTON_COMPILER_TEXT U"EKOPath"

# elif defined(__FCC_VERSION)
	# define ALTON_COMPILER COMPILER_FUJITSUC
	# define ALTON_COMPILER_TEXT U"FujitsuC"

# elif defined(__MINGW32__) || defined(__MINGW64__) || defined(__GNUC__)
	# define ALTON_COMPILER COMPILER_GNUC
	# define ALTON_COMPILER_TEXT U"GCC"

# elif defined(__ghs__)
	# define ALTON_COMPILER COMPILER_GREENHILL
	# define ALTON_COMPILER_TEXT U"GreenHillC"

# elif defined(__HP_cc)
	# define ALTON_COMPILER COMPILER_HPANSI
	# define ALTON_COMPILER_TEXT U"HPAnsiC"

# elif defined(__HP_aCC)
	# define ALTON_COMPILER COMPILER_HPAC
	# define ALTON_COMPILER_TEXT U"HPaC"

# elif defined(__IAR_SYSTEMS_ICC__)
	# define ALTON_COMPILER COMPILER_IARC
	# define ALTON_COMPILER_TEXT U"IAR"

# elif defined(__IBMC__) || defined(__IBMCPP__) || defined(__xlC__) || defined(__ibmxl__)
	# define ALTON_COMPILER COMPILER_IBMXLC
	# define ALTON_COMPILER_TEXT U"IBM-XLC"

# elif defined(__IMAGECRAFT__)
	# define ALTON_COMPILER COMPILER_IMAGECRAFT
	# define ALTON_COMPILER_TEXT U"ImageCraft"

# elif defined(__INTEL_COMPILER) || defined(__ICC) || defined(__ECC) || defined(__ICL)
	# define ALTON_COMPILER COMPILER_INTELC
	# define ALTON_COMPILER_TEXT U"IntelC"

# elif defined(__KCC)
	# define ALTON_COMPILER COMPILER_KAIC
	# define ALTON_COMPILER_TEXT U"KaiC"

# elif defined(__CA__) || defined(__KEIL__)
	# define ALTON_COMPILER COMPILER_KEILARM
	# define ALTON_COMPILER_TEXT U"KEILARM"

# elif defined(__C166__)
	# define ALTON_COMPILER COMPILER_KEIL166
	# define ALTON_COMPILER_TEXT U"KEIL166"

# elif defined(__C51__) || defined(__CX51__)
	# define ALTON_COMPILER COMPILER_KEIL51
	# define ALTON_COMPILER_TEXT U"KEIL51"

# elif defined(__LCC__)
	# define ALTON_COMPILER COMPILER_LCC
	# define ALTON_COMPILER_TEXT U"LCC"

# elif defined(__HIGHC__)
	# define ALTON_COMPILER COMPILER_METAWARE
	# define ALTON_COMPILER_TEXT U"MetaWare"

# elif defined(__MWERKS__) || defined(__CWCC__)
	# define ALTON_COMPILER COMPILER_METROWERKS
	# define ALTON_COMPILER_TEXT U"MetroWerks"

# elif defined(_MSC_VER)
	# define ALTON_COMPILER COMPILER_MSVC
	# define ALTON_COMPILER_TEXT U"MSVC"

# elif defined(_MRI)
	# define ALTON_COMPILER COMPILER_MICROTEC
	# define ALTON_COMPILER_TEXT U"MicrotecC"

# elif defined(__NDPC__) || defined(__NDPX__)
	# define ALTON_COMPILER COMPILER_MICROWAY
	# define ALTON_COMPILER_TEXT U"MicrowayNDPC"

# elif defined(__sgi) || defined(sgi)
	# define ALTON_COMPILER COMPILER_MIPSPRO
	# define ALTON_COMPILER_TEXT U"MIPSPro"

# elif defined(MIRACLE)
	# define ALTON_COMPILER COMPILER_MIRACLEC
	# define ALTON_COMPILER_TEXT U"MiracleC"

# elif defined(__MRC__)
	# define ALTON_COMPILER COMPILER_MPWC
	# define ALTON_COMPILER_TEXT U"MPWC"

# elif defined(__CC_NORCROFT)
	# define ALTON_COMPILER COMPILER_NOROCROFTC
	# define ALTON_COMPILER_TEXT U"NorcroftC"

# elif defined(__NWCC__)
	# define ALTON_COMPILER COMPILER_NWCC
	# define ALTON_COMPILER_TEXT U"NWCC"

# elif defined(__OPEN64__) || defined() || defined(__OPENCC__)
	# define ALTON_COMPILER COMPILER_OPEN64
	# define ALTON_COMPILER_TEXT U"Open64"

# elif defined(ORA_PROC)
	# define ALTON_COMPILER COMPILER_ORACLEC
	# define ALTON_COMPILER_TEXT U"OracleProC"

# elif defined(__SUNPRO_C) || defined(__SUNPRO_CC)
	# define ALTON_COMPILER COMPILER_OSS
	# define ALTON_COMPILER_TEXT U"Oracle-SolarisStudio"

# elif defined(__PACIFIC__)
	# define ALTON_COMPILER COMPILER_PACIFICC
	# define ALTON_COMPILER_TEXT U"PacificC"

# elif defined(__POCC__)
	# define ALTON_COMPILER COMPILER_PALMC
	# define ALTON_COMPILER_TEXT U"PalmC"

# elif defined(__POCC__)
	# define ALTON_COMPILER COMPILER_POCC
	# define ALTON_COMPILER_TEXT U"PellesC"

# elif defined(__PGI) || defined(__PGIC__)
	# define ALTON_COMPILER COMPILER_PORTLANDC
	# define ALTON_COMPILER_TEXT U"PortlandGroupC"

# elif defined(__RENESAS__) || defined(__HITACHI__)
	# define ALTON_COMPILER COMPILER_RENESASC
	# define ALTON_COMPILER_TEXT U"RenesasC"

# elif defined(SASC) || defined(__SASC) || defined(__SASC__)
	# define ALTON_COMPILER COMPILER_SASC
	# define ALTON_COMPILER_TEXT U"SasC"

# elif defined(_SCO_DS)
	# define ALTON_COMPILER COMPILER_SCODS
	# define ALTON_COMPILER_TEXT U"SCOOpenServer"

# elif defined(SDCC)
	# define ALTON_COMPILER COMPILER_SDC
	# define ALTON_COMPILER_TEXT U"SmallDeviceC"

# elif defined(__SNC__)
	# define ALTON_COMPILER COMPILER_SNC
	# define ALTON_COMPILER_TEXT U"SNC"

# elif defined(__VOSC__)
	# define ALTON_COMPILER COMPILER_VOSC
	# define ALTON_COMPILER_TEXT U"StratusVosC"

# elif defined(__TenDRA__)
	# define ALTON_COMPILER COMPILER_TENDRAC
	# define ALTON_COMPILER_TEXT U"TenDRAC"

# elif defined(__SC__)
	# define ALTON_COMPILER COMPILER_SYMANTEC
	# define ALTON_COMPILER_TEXT U"SymantecC"

# elif defined(__TI_COMPILER_VERSION__) || defined(_TMS320C6X)
	# define ALTON_COMPILER COMPILER_TIC
	# define ALTON_COMPILER_TEXT U"TIC"

# elif defined(THINKC3) || defined(THINKC4)
	# define ALTON_COMPILER COMPILER_THINKC
	# define ALTON_COMPILER_TEXT U"THINKC"

# elif defined(__TINYC__)
	# define ALTON_COMPILER COMPILER_TINYC
	# define ALTON_COMPILER_TEXT U"TinyC"

# elif defined(__TURBOC__)
	# define ALTON_COMPILER COMPILER_TURBOC
	# define ALTON_COMPILER_TEXT U"TurboC"

# elif defined(_UCC)
	# define ALTON_COMPILER COMPILER_ULTIMATEC
	# define ALTON_COMPILER_TEXT U"UltimateC"

# elif defined(__USLC__)
	# define ALTON_COMPILER COMPILER_USLC
	# define ALTON_COMPILER_TEXT U"USLC"

# elif defined(__VBCC__)
	# define ALTON_COMPILER COMPILER_VBCC
	# define ALTON_COMPILER_TEXT U"VBCC"

# elif defined(__WATCOMC__)
	# define ALTON_COMPILER COMPILER_WATCOM
	# define ALTON_COMPILER_TEXT U"WatcomC"

# elif defined(__ZTC__)
	# define ALTON_COMPILER COMPILER_ZTC
	# define ALTON_COMPILER_TEXT U"ZortechC"

# else
	# error This compiler is not recognised by Alton.\
			Please modify /Path/To/Alton/ETC/_Generation/ExampleVersionData.hpp.
# endif

// -- The Python Executable's Platform Info --
# ifdef ALTON_PYTHON_VERSION_INFO
	# undef ALTON_PYTHON_VERSION_INFO
# endif /*ALTON_PYTHON_VERSION_INFO*/
# define ALTON_PYTHON_VERSION_INFO U"3.7.5 (default, Apr 19 2020, 20:18:17) [GCC 9.2.1 20191008]"  // Eighteenth
