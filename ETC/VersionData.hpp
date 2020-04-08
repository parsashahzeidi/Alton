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
# define ALTON_RELEASE_NAME U"The Avalanche"  // Second


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
# define ALTON_VERSION_POSTFIX U"CV0"  // Fifth


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
# define ALTON_BUILD_TIME_MONTH 4  // Seventh

// - Day -
# ifdef ALTON_BUILD_TIME_DAY
	# undef ALTON_BUILD_TIME_DAY
# endif /*ALTON_BUILD_TIME_DAY*/
# define ALTON_BUILD_TIME_DAY 7  // Eigth


// -- Minor timings --
// - Hour -
# ifdef ALTON_BUILD_TIME_HOUR
	# undef ALTON_BUILD_TIME_HOUR
# endif /*ALTON_BUILD_TIME_HOUR*/
# define ALTON_BUILD_TIME_HOUR 20  // Ninth

// - Minute -
# ifdef ALTON_BUILD_TIME_MINUTE
	# undef ALTON_BUILD_TIME_MINUTE
# endif /*ALTON_BUILD_TIME_MINUTE*/
# define ALTON_BUILD_TIME_MINUTE 30  // Tenth

// - Second -
# ifdef ALTON_BUILD_TIME_SECOND
	# undef ALTON_BUILD_TIME_SECOND
# endif /*ALTON_BUILD_TIME_SECOND*/
# define ALTON_BUILD_TIME_SECOND 25  // Eleventh!



// --- Build Platform ---
// -- The System's Version Info --
// - The System's Operating System -
# ifdef ALTON_OS
	# undef ALTON_OS
# endif /*ALTON_OS*/

# ifndef ALTON_OS_TEXT
	# undef ALTON_OS_TEXT
# endif /*ALTON_OS_TEXT*/

enum OS_NAME
{  // Twelveth
	OS_LINUX,
	OS_SUN,
	OS_BSD,
	OS_MAC,
	OS_WINDOWS,
	OS_AIX,
	OS_ANDROID,
	OS_AMDAHL_UTS,
	OS_AMIGA,
	OS_APOLLO_AEGIS,
	OS_APOLLO,
	OS_BEOS,
	OS_BLUE_GENE,
	OS_CONVEX,
	OS_DGUX,
	OS_DYNIX,
	OS_ECOS,
	OS_DOS,
	OS_GNU,
	OS_HIUX_MPP,
	OS_HPUX,
	OS_IBM_400,
	OS_INTEGRITY,
	OS_IRIX,
	OS_LINX,
	OS_OS9,
	OS_MINIX,
	OS_MORPHOS,
	OS_MPE,
	OS_NUCLEUS,
	OS_OS2,
	OS_PALM,
	OS_PLAN9,
	OS_DC_OSX,
	OS_QNX,
	OS_SCO_OS,
	OS_VOS,
	OS_SYLLABLE,
	OS_SYMBIAN,
	OS_OSF1,
	OS_UNICOS,
	OS_VMS,
	OS_VXWORKS,
	OS_IBM_ZOS,
	OS_UNIX_BASED,

};

// Thirteenth
# if defined(linux) || defined(__linux) || defined(__linux__) || defined(__gnu_linux__)
	# define ALTON_OS OS_NAME::OS_LINUX
	# define ALTON_OS_TEXT U"Linux"
# elif defined(sun) || defined(__sun)
	# define ALTON_OS OS_NAME::OS_SUN
	# define ALTON_OS_TEXT U"SunOS"
# elif defined(BSD) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__bsdi__) || defined(_SYSTYPE_BSD) || defined(__FreeBSD_kernel__) || defined(__FreeBSD_version) || defined(__NetBSD_Version__)
	# define ALTON_OS OS_NAME::OS_BSD
	# define ALTON_OS_TEXT U"BSD"
# elif defined(__MACOSX__) || defined(__APPLE__) || defined(macintosh) || defined(Macintosh) || defined(__MACH__)
	# define ALTON_OS OS_NAME::OS_MAC
	# define ALTON_OS_TEXT U"MacOS"
# elif defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__WIN64__) || defined(WIN32) || defined(WIN64) || defined(_MSC_VER) || defined(__CYGWIN__) || defined(__TOS_WIN__) || defined(__WINDOWS__) || defined(_WIN16) || defined(_WIN32_WCE) || defined(_WIN32_WCE)
	# define ALTON_OS OS_NAME::OS_WINDOWS
	# define ALTON_OS_TEXT U"Windows"
# elif defined(_AIX) || defined(__TOS_AIX__)
	# define ALTON_OS OS_NAME::OS_AIX
	# define ALTON_OS_TEXT U"AIX"
# elif defined(__ANDROID__) || defined(__ANDROID_API__)
	# define ALTON_OS OS_NAME::OS_ANDROID
	# define ALTON_OS_TEXT U"Android"
# elif defined(UTS)
	# define ALTON_OS OS_NAME::OS_AMDAHL_UTS
	# define ALTON_OS_TEXT U"AmdahlUTS"
# elif defined(AMIGA) || defined(__amigaos__)
	# define ALTON_OS OS_NAME::OS_AMIGA
	# define ALTON_OS_TEXT U"AmigaOS"
# elif defined(aegis)
	# define ALTON_OS OS_NAME::OS_APOLLO_AEGIS
	# define ALTON_OS_TEXT U"ApolloAEGIS"
# elif defined(apollo)
	# define ALTON_OS OS_NAME::OS_APOLLO
	# define ALTON_OS_TEXT U"ApolloOS"
# elif defined(__BEOS__)
	# define ALTON_OS OS_NAME::OS_BEOS
	# define ALTON_OS_TEXT U"BeOS"
# elif defined(__bg__) || defined(__bgq__) || defined(__THW_BLUEGENE__) || defined(__TOS_BGQ__)
	# define ALTON_OS OS_NAME::OS_BLUE_GENE
	# define ALTON_OS_TEXT U"BlueGene"
# elif defined(__convex__)
	# define ALTON_OS OS_NAME::OS_CONVEX
	# define ALTON_OS_TEXT U"ConvexOS"
# elif defined(DGUX) || defined(__DGUX__) || defined(__dgux__)
	# define ALTON_OS OS_NAME::OS_DGUX
	# define ALTON_OS_TEXT U"DG-UX"
# elif defined(_SEQUENT_) || defined(sequent)
	# define ALTON_OS OS_NAME::OS_DYNIX
	# define ALTON_OS_TEXT U"Dynix"
# elif defined(__ECOS)
	# define ALTON_OS OS_NAME::OS_ECOS
	# define ALTON_OS_TEXT U"eCos"
# elif defined(__EMX__) || defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(__DOS__)
	# define ALTON_OS OS_NAME::OS_DOS
	# define ALTON_OS_TEXT U"Dos"
# elif defined(__GNU__) || defined(__gnu_hurd__)
	# define ALTON_OS OS_NAME::OS_GNU
	# define ALTON_OS_TEXT U"Gnu"
# elif defined(__hiuxmpp)
	# define ALTON_OS OS_NAME::OS_HIUX_MPP
	# define ALTON_OS_TEXT U"HI-UX-MPP"
# elif defined(_hpux) || defined(hpux) || defined(__hpux)
	# define ALTON_OS OS_NAME::OS_HPUX
	# define ALTON_OS_TEXT U"HP-UX"
# elif defined(__OS400__)
	# define ALTON_OS OS_NAME::OS_IBM_400
	# define ALTON_OS_TEXT U"OS400"
# elif defined(__INTEGRITY)
	# define ALTON_OS OS_NAME::OS_INTEGRITY
	# define ALTON_OS_TEXT U"Integrity"
# elif defined(sgi) || defined(__sgi)
	# define ALTON_OS OS_NAME::OS_IRIX
	# define ALTON_OS_TEXT U"Irix"
# elif defined(__Lynx__)
	# define ALTON_OS OS_NAME::OS_LINX
	# define ALTON_OS_TEXT U"LynxOS"
# elif defined(__OS9000) || defined(_OSK)
	# define ALTON_OS OS_NAME::OS_OS9
	# define ALTON_OS_TEXT U"OS9"
# elif defined(__minix)
	# define ALTON_OS OS_NAME::OS_MINIX
	# define ALTON_OS_TEXT U"Minix"
# elif defined(__MORPHOS__)
	# define ALTON_OS OS_NAME::OS_MORPHOS
	# define ALTON_OS_TEXT U"MorphOS"
# elif defined(mpeix) || defined(__mpexl)
	# define ALTON_OS OS_NAME::OS_MPE
	# define ALTON_OS_TEXT U"MPE-Ix"
# elif defined(__nucleus__)
	# define ALTON_OS OS_NAME::OS_NUCLEUS
	# define ALTON_OS_TEXT U"Nucleus-RTOS"
# elif defined(OS2) || defined(_OS2) || defined(__OS2__) || defined(__TOS_OS2__)
	# define ALTON_OS OS_NAME::OS_OS2
	# define ALTON_OS_TEXT U"OS2"
# elif defined(__palmos__)
	# define ALTON_OS OS_NAME::OS_PALM
	# define ALTON_OS_TEXT U"PalmOS"
# elif defined(EPLAN9)
	# define ALTON_OS OS_NAME::OS_PLAN9
	# define ALTON_OS_TEXT U"Plan-9"
# elif defined(pyr)
	# define ALTON_OS OS_NAME::OS_DC_OSX
	# define ALTON_OS_TEXT U"DC-OSx"
# elif defined(__QNX__) || defined(__QNXNTO__) || defined(_NTO_VERSION) || defined(BBNDK_VERSION_CURRENT)
	# define ALTON_OS OS_NAME::OS_QNX
	# define ALTON_OS_TEXT U"QNX"
# elif defined(M_I386) || defined(M_XENIX) || defined(_SCO_DS)
	# define ALTON_OS OS_NAME::OS_SCO_OS
	# define ALTON_OS_TEXT U"SCO-OpenServer"
# elif defined(__VOS__)
	# define ALTON_OS OS_NAME::OS_VOS
	# define ALTON_OS_TEXT U"VOS"
# elif defined(__SYLLABLE__)
	# define ALTON_OS OS_NAME::OS_SYLLABLE
	# define ALTON_OS_TEXT U"Syllable"
# elif defined(__SYMBIAN32__)
	# define ALTON_OS OS_NAME::OS_SYMBIAN
	# define ALTON_OS_TEXT U"SymbianOS"
# elif defined(__osf__) || defined(__osf)
	# define ALTON_OS OS_NAME::OS_OSF1
	# define ALTON_OS_TEXT U"Tru64"
# elif defined(_UNICOS) || defined(_CRAY) || defined(__crayx1)
	# define ALTON_OS OS_NAME::OS_UNICOS
	# define ALTON_OS_TEXT U"UnicOS"
# elif defined(VMS) || defined(__VMS) || defined(__VMS_VER)
	# define ALTON_OS OS_NAME::OS_VMS
	# define ALTON_OS_TEXT U"VMS"
# elif defined(__VXWORKS__) || defined(__vxworks) || defined(_WRS_VXWORKS_MAJOR) || defined(_WRS_VXWORKS_MINOR) || defined(_WRS_VXWORKS_MAINT) || defined(__RTP__) || defined(_WRS_KERNEL)
	# define ALTON_OS OS_NAME::OS_VXWORKS
	# define ALTON_OS_TEXT U"VxWorks"
# elif defined(__MVS__) || defined(__HOS_MVS__) || defined(__TOS_MVS__)
	# define ALTON_OS OS_NAME::OS_IBM_ZOS
	# define ALTON_OS_TEXT U"Z-OS"
# elif defined(__INTERIX) || defined(sinux) || defined(__sysv__) || defined(__SVR4) || defined(__svr4__) || defined(_SYSTYPE_SVR4) || defined(ultrix) || defined(__ultrix) || defined(__ultrix__) || defined(__unix__) || defined(__unix) || defined(unix) || defined(sco) || defined(_UNIXWARE7) || defined(_UWIN) || defined(_WINDU_SOURCE)
	# define ALTON_OS OS_NAME::OS_UNIX_BASED
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

enum ARCH_NAME
{  // Fourteenth
	ARCH_ALPHA,
	ARCH_X86_64,
	ARCH_ARM,
	ARCH_ARM64,
	ARCH_BFIN,
	ARCH_CONVEX,
	ARCH_EPIPHANY,
	ARCH_HPPA,
	ARCH_i386,
	ARCH_IA64,
	ARCH_M68k,
	ARCH_MIPS,
	ARCH_PPC,
	ARCH_PYR,
	ARCH_POWER,
	ARCH_SPARC,
	ARCH_SH,
	ARCH_ZARCH,
	ARCH_TMS320,
	ARCH_TMS470,

};

// Fifteenth
# if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
	# define ALTON_ARCH ARCH_NAME::ARCH_ALPHA
	# define ALTON_ARCH_TEXT U"Alpha"
# elif defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || defined(_M_AMD64)
	# define ALTON_ARCH ARCH_NAME::ARCH_X86_64
	# define ALTON_ARCH_TEXT U"AMD64"
# elif defined(__arm__) || defined(__thumb__) || defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB) || defined(_ARM) || defined(_M_ARM) || defined(_M_ARMT) || defined(__arm)
	# define ALTON_ARCH ARCH_NAME::ARCH_ARM
	# define ALTON_ARCH_TEXT U"ARM"
# elif defined(__aarch64__)
	# define ALTON_ARCH ARCH_NAME::ARCH_ARM64
	# define ALTON_ARCH_TEXT U"ARM64"
# elif defined(__bfin) || defined(__BFIN__)
	# define ALTON_ARCH ARCH_NAME::ARCH_BFIN
	# define ALTON_ARCH_TEXT U"Blackfin"
# elif defined(__convex__)
	# define ALTON_ARCH ARCH_NAME::ARCH_CONVEX
	# define ALTON_ARCH_TEXT U"Convex"
# elif defined(__epiphany__)
	# define ALTON_ARCH ARCH_NAME::ARCH_EPIPHANY
	# define ALTON_ARCH_TEXT U"Epiphany"
# elif defined(__hppa__) || defined(__HPPA__) || defined(__hppa)
	# define ALTON_ARCH ARCH_NAME::ARCH_HPPA
	# define ALTON_ARCH_TEXT U"HP/PA"
# elif defined(i386) || defined(__i386) || defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__) || defined(__IA32__) || defined(_M_I86) || defined(_M_IX86) || defined(_M_IX86) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__) || defined(__386)
	# define ALTON_ARCH ARCH_NAME::ARCH_i386
	# define ALTON_ARCH_TEXT U"Intelx86"
# elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
	# define ALTON_ARCH ARCH_NAME::ARCH_IA64
	# define ALTON_ARCH_TEXT U"IntelItanium"
# elif defined(__m68k__) || defined(M68000) || defined(__MC68K__)
	# define ALTON_ARCH ARCH_NAME::ARCH_M68k
	# define ALTON_ARCH_TEXT U"Motorola68k"
# elif defined(__mips__) || defined(mips) || defined(_MIPS_ISA) || defined(_R3000) || defined(_R4000) || defined(_R5900) || defined(__mips) || defined(__MIPS__)
	# define ALTON_ARCH ARCH_NAME::ARCH_MIPS
	# define ALTON_ARCH_TEXT U"MIPS"
# elif defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || defined(__POWERPC__) || defined(__ppc__) || defined(__ppc64__) || defined(__PPC__) || defined(__PPC64__) || defined(_ARCH_PPC) || defined(_ARCH_PPC64) || defined(_M_PPC) || defined(__PPCGECKO__) || defined(__PPCBROADWAY__) || defined(_XENON) || defined(__ppc)
	# define ALTON_ARCH ARCH_NAME::ARCH_PPC
	# define ALTON_ARCH_TEXT U"IBM-PowerPC"
# elif defined(pyr)
	# define ALTON_ARCH ARCH_NAME::ARCH_PYR
	# define ALTON_ARCH_TEXT U"Pyramid-9810"
# elif defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) || defined(_ARCH_PWR) || defined(_ARCH_PWR2) || defined(_ARCH_PWR3) || defined(_ARCH_PWR4)
	# define ALTON_ARCH ARCH_NAME::ARCH_POWER
	# define ALTON_ARCH_TEXT U"RS/6000"
# elif defined(__sparc__) || defined(__sparc) || defined(__sparc_v8__) || defined(__sparc_v9__) || defined(__sparcv8) || defined(__sparcv9)
	# define ALTON_ARCH ARCH_NAME::ARCH_SPARC
	# define ALTON_ARCH_TEXT U"Sparc"
# elif defined(__sh__) || defined(__sh1__) || defined(__sh2__) || defined(__sh3__) || defined(__SH3__) || defined(__SH4__) || defined(__SH5__)
	# define ALTON_ARCH ARCH_NAME::ARCH_SH
	# define ALTON_ARCH_TEXT U"SuperH"
# elif defined(__370__) || defined(__THW_370__) || defined(__s390__) || defined(__s390x__) || defined(__zarch__) || defined(__SYSC_ZARCH__)
	# define ALTON_ARCH ARCH_NAME::ARCH_ZARCH
	# define ALTON_ARCH_TEXT U"SystemZ"
# elif defined(_TMS320C2XX) || defined(__TMS320C2000__) || defined(_TMS320C5X) || defined(__TMS320C55X__) || defined(_TMS320C6X) || defined(__TMS320C6X__)
	# define ALTON_ARCH ARCH_NAME::ARCH_TMS320
	# define ALTON_ARCH_TEXT U"TMS320"
# elif defined(__TMS470__)
	# define ALTON_ARCH ARCH_NAME::ARCH_TMS470
	# define ALTON_ARCH_TEXT U"TMS470"
# else
	# error This architecture is not recognised by Alton.\
			Please modify /Path/To/Alton/ETC/_Generation/ExampleVersionData.hpp.
# endif

// -- The Python Executable's Platform Info --
# ifdef ALTON_PYTHON_VERSION_INFO
	# undef ALTON_PYTHON_VERSION_INFO
# endif /*ALTON_PYTHON_VERSION_INFO*/
# define ALTON_PYTHON_VERSION_INFO U"3.7.5 (default, Nov 20 2019, 09:21:52) [GCC 9.2.1 20191008]"  // Sixteenth
