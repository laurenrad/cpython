/* pyconfig.h for RISC OS */


#ifndef Py_PYCONFIG_H
#define Py_PYCONFIG_H


/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* Define for AIX if your compiler is a genuine IBM xlC/xlC_r and you want
   support for AIX C++ shared extension modules. */
#undef AIX_GENUINE_CPLUSPLUS

/* Alternative SOABI used in debug build to load C extensions built in release
   mode */
#undef ALT_SOABI

/* The Android API level. */
#undef ANDROID_API_LEVEL

/* Define if C doubles are 64-bit IEEE 754 binary format, stored in ARM
   mixed-endian order (byte order 45670123) */
#define DOUBLE_IS_ARM_MIXED_ENDIAN_IEEE754 1

/* Define if C doubles are 64-bit IEEE 754 binary format, stored with the most
   significant byte first */
#undef DOUBLE_IS_BIG_ENDIAN_IEEE754

/* Define if C doubles are 64-bit IEEE 754 binary format, stored with the
   least significant byte first */
#undef DOUBLE_IS_LITTLE_ENDIAN_IEEE754

/* Define if --enable-ipv6 is specified */
#undef ENABLE_IPV6

/* Define to 1 if your system stores words within floats with the most
   significant word first */
#undef FLOAT_WORDS_BIGENDIAN

/* Define if flock needs to be linked with bsd library. */
#undef FLOCK_NEEDS_LIBBSD

/* Define if getpgrp() must be called as getpgrp(0). */
#undef GETPGRP_HAVE_ARG

/* Define if gettimeofday() does not have second (timezone) argument This is
   the case on Motorola V4 (R40V4.2) */
#undef GETTIMEOFDAY_NO_TZ

/* Define to 1 if you have the `accept4' function. */
#define HAVE_ACCEPT4 1

/* Define to 1 if you have the `acosh' function. */
#define HAVE_ACOSH 1

/* struct addrinfo (netdb.h) */
#define HAVE_ADDRINFO 1

/* Define to 1 if you have the `alarm' function. */
#define HAVE_ALARM 1

/* Define if aligned memory access is required */
#undef HAVE_ALIGNED_REQUIRED

/* Define to 1 if you have the <alloca.h> header file. */
#define HAVE_ALLOCA_H 1

/* Define this if your time.h defines altzone. */
#undef HAVE_ALTZONE

/* Define to 1 if you have the `asinh' function. */
#define HAVE_ASINH 1

/* Define to 1 if you have the <asm/types.h> header file. */
#undef HAVE_ASM_TYPES_H

/* Define to 1 if you have the `atanh' function. */
#define HAVE_ATANH 1

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#undef HAVE_BIND_TEXTDOMAIN_CODESET

/* Define to 1 if you have the <bluetooth/bluetooth.h> header file. */
#undef HAVE_BLUETOOTH_BLUETOOTH_H

/* Define to 1 if you have the <bluetooth.h> header file. */
#undef HAVE_BLUETOOTH_H

/* Define if mbstowcs(NULL, "text", 0) does not return the number of wide
   chars that would be converted. */
#define HAVE_BROKEN_MBSTOWCS 1

/* Define if nice() returns success/failure instead of the new priority. */
#undef HAVE_BROKEN_NICE

/* Define if the system reports an invalid PIPE_BUF value. */
#undef HAVE_BROKEN_PIPE_BUF

/* Define if poll() sets errno on invalid file descriptors. */
#undef HAVE_BROKEN_POLL

/* Define if the Posix semaphores do not work on your system */
#undef HAVE_BROKEN_POSIX_SEMAPHORES

/* Define if pthread_sigmask() does not work on your system. */
#undef HAVE_BROKEN_PTHREAD_SIGMASK

/* define to 1 if your sem_getvalue is broken. */
#undef HAVE_BROKEN_SEM_GETVALUE

/* Define if `unsetenv` does not return an int. */
#undef HAVE_BROKEN_UNSETENV

/* Has builtin atomics */
#undef HAVE_BUILTIN_ATOMIC

/* Define to 1 if you have the 'chflags' function. */
#undef HAVE_CHFLAGS

/* Define to 1 if you have the `chown' function. */
#undef HAVE_CHOWN

/* Define if you have the 'chroot' function. */
#undef HAVE_CHROOT

/* Define to 1 if you have the `clock' function. */
#define HAVE_CLOCK 1

/* Define to 1 if you have the `clock_getres' function. */
#define HAVE_CLOCK_GETRES 1

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `clock_settime' function. */
#define HAVE_CLOCK_SETTIME 1

/* Define if the C compiler supports computed gotos. */
#define HAVE_COMPUTED_GOTOS 1

/* Define to 1 if you have the `confstr' function. */
#undef HAVE_CONFSTR

/* Define to 1 if you have the <conio.h> header file. */
#undef HAVE_CONIO_H

/* Define to 1 if you have the `copysign' function. */
#undef HAVE_COPYSIGN

/* Define to 1 if you have the `copy_file_range' function. */
#undef HAVE_COPY_FILE_RANGE

/* Define to 1 if you have the <crypt.h> header file. */
#define HAVE_CRYPT_H 1

/* Define if you have the crypt_r() function. */
#define HAVE_CRYPT_R 1

/* Define to 1 if you have the `ctermid' function. */
#undef HAVE_CTERMID

/* Define if you have the 'ctermid_r' function. */
#undef HAVE_CTERMID_R

/* Define if you have the 'filter' function. */
#undef HAVE_CURSES_FILTER

/* Define to 1 if you have the <curses.h> header file. */
#undef HAVE_CURSES_H

/* Define if you have the 'has_key' function. */
#undef HAVE_CURSES_HAS_KEY

/* Define if you have the 'immedok' function. */
#undef HAVE_CURSES_IMMEDOK

/* Define if you have the 'is_pad' function or macro. */
#undef HAVE_CURSES_IS_PAD

/* Define if you have the 'is_term_resized' function. */
#undef HAVE_CURSES_IS_TERM_RESIZED

/* Define if you have the 'resizeterm' function. */
#undef HAVE_CURSES_RESIZETERM

/* Define if you have the 'resize_term' function. */
#undef HAVE_CURSES_RESIZE_TERM

/* Define if you have the 'syncok' function. */
#undef HAVE_CURSES_SYNCOK

/* Define if you have the 'typeahead' function. */
#undef HAVE_CURSES_TYPEAHEAD

/* Define if you have the 'use_env' function. */
#undef HAVE_CURSES_USE_ENV

/* Define if you have the 'wchgat' function. */
#undef HAVE_CURSES_WCHGAT

/* Define to 1 if you have the declaration of `isfinite', and to 0 if you
   don't. */
#define HAVE_DECL_ISFINITE 1

/* Define to 1 if you have the declaration of `isinf', and to 0 if you don't.
   */
#define HAVE_DECL_ISINF 1

/* Define to 1 if you have the declaration of `isnan', and to 0 if you don't.
   */
#define HAVE_DECL_ISNAN 1

/* Define to 1 if you have the declaration of `RTLD_DEEPBIND', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_DEEPBIND 0

/* Define to 1 if you have the declaration of `RTLD_GLOBAL', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_GLOBAL 1

/* Define to 1 if you have the declaration of `RTLD_LAZY', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_LAZY 1

/* Define to 1 if you have the declaration of `RTLD_LOCAL', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_LOCAL 1

/* Define to 1 if you have the declaration of `RTLD_MEMBER', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_MEMBER 0

/* Define to 1 if you have the declaration of `RTLD_NODELETE', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_NODELETE 0

/* Define to 1 if you have the declaration of `RTLD_NOLOAD', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_NOLOAD 0

/* Define to 1 if you have the declaration of `RTLD_NOW', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_NOW 1

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
#define HAVE_DECL_TZNAME 1

/* Define to 1 if you have the device macros. */
#undef HAVE_DEVICE_MACROS

/* Define to 1 if you have the /dev/ptc device file. */
#undef HAVE_DEV_PTC

/* Define to 1 if you have the /dev/ptmx device file. */
#undef HAVE_DEV_PTMX

/* Define to 1 if you have the <direct.h> header file. */
#undef HAVE_DIRECT_H

/* Define to 1 if the dirent structure has a d_type field */
#define HAVE_DIRENT_D_TYPE 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define if you have the 'dirfd' function or macro. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `dlopen' function. */
#define HAVE_DLOPEN 1

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Define to 1 if you have the `dup3' function. */
#undef HAVE_DUP3

/* Defined when any dynamic module loading is enabled. */
#define HAVE_DYNAMIC_LOADING 1

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define if you have the 'epoll' functions. */
#undef HAVE_EPOLL

/* Define if you have the 'epoll_create1' function. */
#undef HAVE_EPOLL_CREATE1

/* Define to 1 if you have the `erf' function. */
#define HAVE_ERF 1

/* Define to 1 if you have the `erfc' function. */
#define HAVE_ERFC 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the `execv' function. */
#define HAVE_EXECV 1

/* Define to 1 if you have the `explicit_bzero' function. */
#undef HAVE_EXPLICIT_BZERO

/* Define to 1 if you have the `explicit_memset' function. */
#undef HAVE_EXPLICIT_MEMSET

/* Define to 1 if you have the `expm1' function. */
#define HAVE_EXPM1 1

/* Define to 1 if you have the `faccessat' function. */
#undef HAVE_FACCESSAT

/* Define if you have the 'fchdir' function. */
#define HAVE_FCHDIR 1

/* Define to 1 if you have the `fchmod' function. */
#undef HAVE_FCHMOD

/* Define to 1 if you have the `fchmodat' function. */
#undef HAVE_FCHMODAT

/* Define to 1 if you have the `fchown' function. */
#undef HAVE_FCHOWN

/* Define to 1 if you have the `fchownat' function. */
#undef HAVE_FCHOWNAT

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define if you have the 'fdatasync' function. */
#undef HAVE_FDATASYNC

/* Define to 1 if you have the `fdopendir' function. */
#undef HAVE_FDOPENDIR

/* Define to 1 if you have the `fdwalk' function. */
#undef HAVE_FDWALK

/* Define to 1 if you have the `fexecve' function. */
#undef HAVE_FEXECVE

/* Define to 1 if you have the `finite' function. */
#define HAVE_FINITE 1

/* Define to 1 if you have the `flock' function. */
#undef HAVE_FLOCK

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `forkpty' function. */
#undef HAVE_FORKPTY

/* Define to 1 if you have the `fpathconf' function. */
#undef HAVE_FPATHCONF

/* Define to 1 if you have the `fseek64' function. */
#undef HAVE_FSEEK64

/* Define to 1 if you have the `fseeko' function. */
#undef HAVE_FSEEKO

/* Define to 1 if you have the `fstatat' function. */
#undef HAVE_FSTATAT

/* Define to 1 if you have the `fstatvfs' function. */
#undef HAVE_FSTATVFS

/* Define if you have the 'fsync' function. */
#undef HAVE_FSYNC

/* Define to 1 if you have the `ftell64' function. */
#undef HAVE_FTELL64

/* Define to 1 if you have the `ftello' function. */
#define HAVE_FTELLO 1

/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME 1

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `futimens' function. */
#undef HAVE_FUTIMENS

/* Define to 1 if you have the `futimes' function. */
#undef HAVE_FUTIMES

/* Define to 1 if you have the `futimesat' function. */
#undef HAVE_FUTIMESAT

/* Define to 1 if you have the `gai_strerror' function. */
#define HAVE_GAI_STRERROR 1

/* Define to 1 if you have the `gamma' function. */
#define HAVE_GAMMA 1

/* Define if we can use gcc inline assembler to get and set mc68881 fpcr */
#undef HAVE_GCC_ASM_FOR_MC68881

/* Define if we can use x64 gcc inline assembler */
#undef HAVE_GCC_ASM_FOR_X64

/* Define if we can use gcc inline assembler to get and set x87 control word
   */
#undef HAVE_GCC_ASM_FOR_X87

/* Define if your compiler provides __uint128_t */
#undef HAVE_GCC_UINT128_T

/* Define if you have the getaddrinfo function. */
#define HAVE_GETADDRINFO 1

/* Define this if you have flockfile(), getc_unlocked(), and funlockfile() */
#undef HAVE_GETC_UNLOCKED

/* Define to 1 if you have the `getentropy' function. */
#undef HAVE_GETENTROPY

/* Define to 1 if you have the `getgrgid_r' function. */
#undef HAVE_GETGRGID_R

/* Define to 1 if you have the `getgrnam_r' function. */
#undef HAVE_GETGRNAM_R

/* Define to 1 if you have the `getgrouplist' function. */
#undef HAVE_GETGROUPLIST

/* Define to 1 if you have the `getgroups' function. */
#undef HAVE_GETGROUPS

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define this if you have some version of gethostbyname_r() */
#define HAVE_GETHOSTBYNAME_R 1

/* Define this if you have the 3-arg version of gethostbyname_r(). */
#undef HAVE_GETHOSTBYNAME_R_3_ARG

/* Define this if you have the 5-arg version of gethostbyname_r(). */
#undef HAVE_GETHOSTBYNAME_R_5_ARG

/* Define this if you have the 6-arg version of gethostbyname_r(). */
#define HAVE_GETHOSTBYNAME_R_6_ARG 1

/* Define to 1 if you have the `getitimer' function. */
#define HAVE_GETITIMER 1

/* Define to 1 if you have the `getloadavg' function. */
#undef HAVE_GETLOADAVG

/* Define to 1 if you have the `getlogin' function. */
#define HAVE_GETLOGIN 1

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* Define if you have the 'getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpeername' function. */
#define HAVE_GETPEERNAME 1

/* Define to 1 if you have the `getpgid' function. */
#undef HAVE_GETPGID

/* Define to 1 if you have the `getpgrp' function. */
#undef HAVE_GETPGRP

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `getpriority' function. */
#define HAVE_GETPRIORITY 1

/* Define to 1 if you have the `getpwent' function. */
#undef HAVE_GETPWENT

/* Define to 1 if you have the `getpwnam_r' function. */
#undef HAVE_GETPWNAM_R

/* Define to 1 if you have the `getpwuid_r' function. */
#undef HAVE_GETPWUID_R

/* Define to 1 if the getrandom() function is available */
#undef HAVE_GETRANDOM

/* Define to 1 if the Linux getrandom() syscall is available */
#undef HAVE_GETRANDOM_SYSCALL

/* Define to 1 if you have the `getresgid' function. */
#undef HAVE_GETRESGID

/* Define to 1 if you have the `getresuid' function. */
#undef HAVE_GETRESUID

/* Define to 1 if you have the `getsid' function. */
#undef HAVE_GETSID

/* Define to 1 if you have the `getspent' function. */
#undef HAVE_GETSPENT

/* Define to 1 if you have the `getspnam' function. */
#undef HAVE_GETSPNAM

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getwd' function. */
#define HAVE_GETWD 1

/* Define if glibc has incorrect _FORTIFY_SOURCE wrappers for memmove and
   bcopy. */
#undef HAVE_GLIBC_MEMMOVE_BUG

/* Define to 1 if you have the <grp.h> header file. */
#undef HAVE_GRP_H

/* Define if you have the 'hstrerror' function. */
#define HAVE_HSTRERROR 1

/* Define this if you have le64toh() */
#undef HAVE_HTOLE64

/* Define to 1 if you have the `hypot' function. */
#define HAVE_HYPOT 1

/* Define to 1 if you have the <ieeefp.h> header file. */
#undef HAVE_IEEEFP_H

/* Define to 1 if you have the `if_nameindex' function. */
#undef HAVE_IF_NAMEINDEX

/* Define if you have the 'inet_aton' function. */
#define HAVE_INET_ATON 1

/* Define if you have the 'inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the `initgroups' function. */
#undef HAVE_INITGROUPS

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <io.h> header file. */
#undef HAVE_IO_H

/* Define if gcc has the ipa-pure-const bug. */
#undef HAVE_IPA_PURE_CONST_BUG

/* Define to 1 if you have the `kill' function. */
#define HAVE_KILL 1

/* Define to 1 if you have the `killpg' function. */
#define HAVE_KILLPG 1

/* Define if you have the 'kqueue' functions. */
#undef HAVE_KQUEUE

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Defined to enable large file support when an off_t is bigger than a long
   and long long is at least as big as an off_t. You may need to add some
   flags for configuration and compilation to enable this mode. (For Solaris
   and Linux, the necessary defines are already defined.) */
#undef HAVE_LARGEFILE_SUPPORT

/* Define to 1 if you have the 'lchflags' function. */
#undef HAVE_LCHFLAGS

/* Define to 1 if you have the `lchmod' function. */
#undef HAVE_LCHMOD

/* Define to 1 if you have the `lchown' function. */
#undef HAVE_LCHOWN

/* Define to 1 if you have the `lgamma' function. */
#define HAVE_LGAMMA 1

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `dld' library (-ldld). */
#undef HAVE_LIBDLD

/* Define to 1 if you have the `ieee' library (-lieee). */
#undef HAVE_LIBIEEE

/* Define to 1 if you have the <libintl.h> header file. */
#undef HAVE_LIBINTL_H

/* Define if you have the readline library (-lreadline). */
#undef HAVE_LIBREADLINE

/* Define to 1 if you have the `resolv' library (-lresolv). */
#undef HAVE_LIBRESOLV

/* Define to 1 if you have the `sendfile' library (-lsendfile). */
#undef HAVE_LIBSENDFILE

/* Define to 1 if you have the <libutil.h> header file. */
#undef HAVE_LIBUTIL_H

/* Define if you have the 'link' function. */
#undef HAVE_LINK

/* Define to 1 if you have the `linkat' function. */
#undef HAVE_LINKAT

/* Define to 1 if you have the <linux/can/bcm.h> header file. */
#undef HAVE_LINUX_CAN_BCM_H

/* Define to 1 if you have the <linux/can.h> header file. */
#undef HAVE_LINUX_CAN_H

/* Define if compiling using Linux 3.6 or later. */
#undef HAVE_LINUX_CAN_RAW_FD_FRAMES

/* Define to 1 if you have the <linux/can/raw.h> header file. */
#undef HAVE_LINUX_CAN_RAW_H

/* Define to 1 if you have the <linux/memfd.h> header file. */
#undef HAVE_LINUX_MEMFD_H

/* Define to 1 if you have the <linux/netlink.h> header file. */
#undef HAVE_LINUX_NETLINK_H

/* Define to 1 if you have the <linux/qrtr.h> header file. */
#undef HAVE_LINUX_QRTR_H

/* Define to 1 if you have the <linux/random.h> header file. */
#undef HAVE_LINUX_RANDOM_H

/* Define to 1 if you have the <linux/tipc.h> header file. */
#undef HAVE_LINUX_TIPC_H

/* Define to 1 if you have the <linux/vm_sockets.h> header file. */
#undef HAVE_LINUX_VM_SOCKETS_H

/* Define to 1 if you have the `lockf' function. */
#undef HAVE_LOCKF

/* Define to 1 if you have the `log1p' function. */
#define HAVE_LOG1P 1

/* Define to 1 if you have the `log2' function. */
#define HAVE_LOG2 1

/* Define to 1 if the system has the type `long double'. */
#define HAVE_LONG_DOUBLE 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if you have the `lutimes' function. */
#undef HAVE_LUTIMES

/* Define to 1 if you have the `madvise' function. */
#define HAVE_MADVISE 1

/* Define this if you have the makedev macro. */
#undef HAVE_MAKEDEV

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define if you have the 'memfd_create' function. */
#undef HAVE_MEMFD_CREATE

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memrchr' function. */
#define HAVE_MEMRCHR 1

/* Define to 1 if you have the `mkdirat' function. */
#undef HAVE_MKDIRAT

/* Define to 1 if you have the `mkfifo' function. */
#define HAVE_MKFIFO 1

/* Define to 1 if you have the `mkfifoat' function. */
#undef HAVE_MKFIFOAT

/* Define to 1 if you have the `mknod' function. */
#undef HAVE_MKNOD

/* Define to 1 if you have the `mknodat' function. */
#undef HAVE_MKNODAT

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `mremap' function. */
#define HAVE_MREMAP 1

/* Define to 1 if you have the <ncurses.h> header file. */
#undef HAVE_NCURSES_H

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the <netpacket/packet.h> header file. */
#undef HAVE_NETPACKET_PACKET_H

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the `nice' function. */
#define HAVE_NICE 1

/* Define to 1 if you have the `openat' function. */
#undef HAVE_OPENAT

/* Define to 1 if you have the `openpty' function. */
#undef HAVE_OPENPTY

/* Define to 1 if you have the `pathconf' function. */
#undef HAVE_PATHCONF

/* Define to 1 if you have the `pause' function. */
#undef HAVE_PAUSE

/* Define to 1 if you have the `pipe2' function. */
#undef HAVE_PIPE2

/* Define to 1 if you have the `plock' function. */
#undef HAVE_PLOCK

/* Define to 1 if you have the `poll' function. */
#undef HAVE_POLL

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the `posix_fadvise' function. */
#undef HAVE_POSIX_FADVISE

/* Define to 1 if you have the `posix_fallocate' function. */
#undef HAVE_POSIX_FALLOCATE

/* Define to 1 if you have the `posix_spawn' function. */
#undef HAVE_POSIX_SPAWN

/* Define to 1 if you have the `posix_spawnp' function. */
#undef HAVE_POSIX_SPAWNP

/* Define to 1 if you have the `pread' function. */
#undef HAVE_PREAD

/* Define to 1 if you have the `preadv' function. */
#undef HAVE_PREADV

/* Define to 1 if you have the `preadv2' function. */
#undef HAVE_PREADV2

/* Define if you have the 'prlimit' functions. */
#undef HAVE_PRLIMIT

/* Define if you have the '_dyld_shared_cache_contains_path' function. */
#undef HAVE_DYLD_SHARED_CACHE_CONTAINS_PATH

/* Define to 1 if you have the <process.h> header file. */
#undef HAVE_PROCESS_H

/* Define if your compiler supports function prototype */
#define HAVE_PROTOTYPES 1

/* Define to 1 if you have the `pthread_condattr_setclock' function. */
#undef HAVE_PTHREAD_CONDATTR_SETCLOCK

/* Defined for Solaris 2.6 bug in pthread header. */
#undef HAVE_PTHREAD_DESTRUCTOR

/* Define to 1 if you have the `pthread_getcpuclockid' function. */
#undef HAVE_PTHREAD_GETCPUCLOCKID

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the `pthread_init' function. */
#undef HAVE_PTHREAD_INIT

/* Define to 1 if you have the `pthread_kill' function. */
#define HAVE_PTHREAD_KILL 1

/* Define to 1 if you have the `pthread_sigmask' function. */
#define HAVE_PTHREAD_SIGMASK 1

/* Define to 1 if you have the <pty.h> header file. */
#undef HAVE_PTY_H

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the `pwrite' function. */
#undef HAVE_PWRITE

/* Define to 1 if you have the `pwritev' function. */
#undef HAVE_PWRITEV

/* Define to 1 if you have the `pwritev2' function. */
#undef HAVE_PWRITEV2

/* Define to 1 if you have the `readlink' function. */
#define HAVE_READLINK 1

/* Define to 1 if you have the `readlinkat' function. */
#undef HAVE_READLINKAT

/* Define to 1 if you have the `readv' function. */
#define HAVE_READV 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `renameat' function. */
#undef HAVE_RENAMEAT

/* Define if readline supports append_history */
#undef HAVE_RL_APPEND_HISTORY

/* Define if you can turn off readline's signal handling. */
#undef HAVE_RL_CATCH_SIGNAL

/* Define if you have readline 2.2 */
#undef HAVE_RL_COMPLETION_APPEND_CHARACTER

/* Define if you have readline 4.0 */
#undef HAVE_RL_COMPLETION_DISPLAY_MATCHES_HOOK

/* Define if you have readline 4.2 */
#undef HAVE_RL_COMPLETION_MATCHES

/* Define if you have rl_completion_suppress_append */
#undef HAVE_RL_COMPLETION_SUPPRESS_APPEND

/* Define if you have readline 4.0 */
#undef HAVE_RL_PRE_INPUT_HOOK

/* Define if you have readline 4.0 */
#undef HAVE_RL_RESIZE_TERMINAL

/* Define to 1 if you have the `round' function. */
#define HAVE_ROUND 1

/* Define to 1 if you have the `rtpSpawn' function. */
#undef HAVE_RTPSPAWN

/* Define to 1 if you have the `sched_get_priority_max' function. */
#undef HAVE_SCHED_GET_PRIORITY_MAX

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the `sched_rr_get_interval' function. */
#undef HAVE_SCHED_RR_GET_INTERVAL

/* Define to 1 if you have the `sched_setaffinity' function. */
#undef HAVE_SCHED_SETAFFINITY

/* Define to 1 if you have the `sched_setparam' function. */
#undef HAVE_SCHED_SETPARAM

/* Define to 1 if you have the `sched_setscheduler' function. */
#undef HAVE_SCHED_SETSCHEDULER

/* Define to 1 if you have the `sem_getvalue' function. */
#define HAVE_SEM_GETVALUE 1

/* Define to 1 if you have the `sem_open' function. */
#define HAVE_SEM_OPEN 1

/* Define to 1 if you have the `sem_timedwait' function. */
#undef HAVE_SEM_TIMEDWAIT

/* Define to 1 if you have the `sem_unlink' function. */
#define HAVE_SEM_UNLINK 1

/* Define to 1 if you have the `sendfile' function. */
#undef HAVE_SENDFILE

/* Define to 1 if you have the `setegid' function. */
#undef HAVE_SETEGID

/* Define to 1 if you have the `seteuid' function. */
#undef HAVE_SETEUID

/* Define to 1 if you have the `setgid' function. */
#undef HAVE_SETGID

/* Define if you have the 'setgroups' function. */
#undef HAVE_SETGROUPS

/* Define to 1 if you have the `sethostname' function. */
#define HAVE_SETHOSTNAME 1

/* Define to 1 if you have the `setitimer' function. */
#define HAVE_SETITIMER 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setpgid' function. */
#undef HAVE_SETPGID

/* Define to 1 if you have the `setpgrp' function. */
#undef HAVE_SETPGRP

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the `setregid' function. */
#undef HAVE_SETREGID

/* Define to 1 if you have the `setresgid' function. */
#undef HAVE_SETRESGID

/* Define to 1 if you have the `setresuid' function. */
#undef HAVE_SETRESUID

/* Define to 1 if you have the `setreuid' function. */
#undef HAVE_SETREUID

/* Define to 1 if you have the `setsid' function. */
#undef HAVE_SETSID

/* Define to 1 if you have the `setuid' function. */
#undef HAVE_SETUID

/* Define to 1 if you have the `setvbuf' function. */
#define HAVE_SETVBUF 1

/* Define to 1 if you have the <shadow.h> header file. */
#undef HAVE_SHADOW_H

/* Define to 1 if you have the `shm_open' function. */
#undef HAVE_SHM_OPEN

/* Define to 1 if you have the `shm_unlink' function. */
#undef HAVE_SHM_UNLINK

/* Define to 1 if you have the `sigaction' function. */
#undef HAVE_SIGACTION

/* Define to 1 if you have the `sigaltstack' function. */
#undef HAVE_SIGALTSTACK

/* Define to 1 if you have the `sigfillset' function. */
#undef HAVE_SIGFILLSET

/* Define to 1 if `si_band' is a member of `siginfo_t'. */
#define HAVE_SIGINFO_T_SI_BAND 1

/* Define to 1 if you have the `siginterrupt' function. */
#define HAVE_SIGINTERRUPT 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `sigpending' function. */
#define HAVE_SIGPENDING 1

/* Define to 1 if you have the `sigrelse' function. */
#undef HAVE_SIGRELSE

/* Define to 1 if you have the `sigtimedwait' function. */
#undef HAVE_SIGTIMEDWAIT

/* Define to 1 if you have the `sigwait' function. */
#define HAVE_SIGWAIT 1

/* Define to 1 if you have the `sigwaitinfo' function. */
#undef HAVE_SIGWAITINFO

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* struct sockaddr_alg (linux/if_alg.h) */
#undef HAVE_SOCKADDR_ALG

/* Define if sockaddr has sa_len member */
#undef HAVE_SOCKADDR_SA_LEN

/* struct sockaddr_storage (sys/socket.h) */
#define HAVE_SOCKADDR_STORAGE 1

/* Define if you have the 'socketpair' function. */
#define HAVE_SOCKETPAIR 1

/* Define to 1 if you have the <spawn.h> header file. */
#undef HAVE_SPAWN_H

/* Define if your compiler provides ssize_t */
#define HAVE_SSIZE_T 1

/* Define to 1 if you have the `statvfs' function. */
#undef HAVE_STATVFS

/* Define if you have struct stat.st_mtim.tv_nsec */
#undef HAVE_STAT_TV_NSEC

/* Define if you have struct stat.st_mtimensec */
#undef HAVE_STAT_TV_NSEC2

/* Define if your compiler supports variable length function prototypes (e.g.
   void fprintf(FILE *, char *, ...);) *and* <stdarg.h> */
#define HAVE_STDARG_PROTOTYPES 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Has stdatomic.h with atomic_int */
#undef HAVE_STD_ATOMIC

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcpy' function. */
#undef HAVE_STRLCPY

/* Define to 1 if you have the <stropts.h> header file. */
#undef HAVE_STROPTS_H

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if `pw_gecos' is a member of `struct passwd'. */
#undef HAVE_STRUCT_PASSWD_PW_GECOS

/* Define to 1 if `pw_passwd' is a member of `struct passwd'. */
#undef HAVE_STRUCT_PASSWD_PW_PASSWD

/* Define to 1 if `st_birthtime' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_BIRTHTIME

/* Define to 1 if `st_blksize' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_BLKSIZE

/* Define to 1 if `st_blocks' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_BLOCKS

/* Define to 1 if `st_flags' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_FLAGS

/* Define to 1 if `st_gen' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_GEN

/* Define to 1 if `st_rdev' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_RDEV

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_ZONE 1

/* Define if you have the 'symlink' function. */
#undef HAVE_SYMLINK

/* Define to 1 if you have the `symlinkat' function. */
#undef HAVE_SYMLINKAT

/* Define to 1 if you have the `sync' function. */
#undef HAVE_SYNC

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sysexits.h> header file. */
#define HAVE_SYSEXITS_H 1

/* Define to 1 if you have the <sys/audioio.h> header file. */
#undef HAVE_SYS_AUDIOIO_H

/* Define to 1 if you have the <sys/bsdtty.h> header file. */
#undef HAVE_SYS_BSDTTY_H

/* Define to 1 if you have the <sys/devpoll.h> header file. */
#undef HAVE_SYS_DEVPOLL_H

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_DIR_H

/* Define to 1 if you have the <sys/endian.h> header file. */
#undef HAVE_SYS_ENDIAN_H

/* Define to 1 if you have the <sys/epoll.h> header file. */
#undef HAVE_SYS_EPOLL_H

/* Define to 1 if you have the <sys/event.h> header file. */
#undef HAVE_SYS_EVENT_H

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/kern_control.h> header file. */
#undef HAVE_SYS_KERN_CONTROL_H

/* Define to 1 if you have the <sys/loadavg.h> header file. */
#undef HAVE_SYS_LOADAVG_H

/* Define to 1 if you have the <sys/lock.h> header file. */
#undef HAVE_SYS_LOCK_H

/* Define to 1 if you have the <sys/memfd.h> header file. */
#undef HAVE_SYS_MEMFD_H

/* Define to 1 if you have the <sys/mkdev.h> header file. */
#undef HAVE_SYS_MKDEV_H

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/modem.h> header file. */
#undef HAVE_SYS_MODEM_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#undef HAVE_SYS_POLL_H

/* Define to 1 if you have the <sys/random.h> header file. */
#undef HAVE_SYS_RANDOM_H

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/sendfile.h> header file. */
#undef HAVE_SYS_SENDFILE_H

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#undef HAVE_SYS_STATVFS_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/syscall.h> header file. */
#undef HAVE_SYS_SYSCALL_H

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
#define HAVE_SYS_SYSMACROS_H 1

/* Define to 1 if you have the <sys/sys_domain.h> header file. */
#undef HAVE_SYS_SYS_DOMAIN_H

/* Define to 1 if you have the <sys/termio.h> header file. */
#undef HAVE_SYS_TERMIO_H

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <sys/xattr.h> header file. */
#undef HAVE_SYS_XATTR_H

/* Define to 1 if you have the `tcgetpgrp' function. */
#define HAVE_TCGETPGRP 1

/* Define to 1 if you have the `tcsetpgrp' function. */
#define HAVE_TCSETPGRP 1

/* Define to 1 if you have the `tempnam' function. */
#define HAVE_TEMPNAM 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <term.h> header file. */
#undef HAVE_TERM_H

/* Define to 1 if you have the `tgamma' function. */
#define HAVE_TGAMMA 1

/* Define to 1 if you have the `timegm' function. */
#define HAVE_TIMEGM 1

/* Define to 1 if you have the `times' function. */
#undef HAVE_TIMES

/* Define to 1 if you have the `tmpfile' function. */
#define HAVE_TMPFILE 1

/* Define to 1 if you have the `tmpnam' function. */
#define HAVE_TMPNAM 1

/* Define to 1 if you have the `tmpnam_r' function. */
#define HAVE_TMPNAM_R 1

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#undef HAVE_TM_ZONE

/* Define to 1 if you have the `truncate' function. */
#define HAVE_TRUNCATE 1

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
#undef HAVE_TZNAME

/* Define this if you have tcl and TCL_UTF_MAX==6 */
#undef HAVE_UCS4_TCL

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlinkat' function. */
#undef HAVE_UNLINKAT

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define if you have a useable wchar_t type defined in wchar.h; useable means
   wchar_t must be an unsigned type with at least 16 bits. (see
   Include/unicodeobject.h). */
#define HAVE_USABLE_WCHAR_T 1

/* Define to 1 if you have the <util.h> header file. */
#undef HAVE_UTIL_H

/* Define to 1 if you have the `utimensat' function. */
#undef HAVE_UTIMENSAT

/* Define to 1 if you have the `utimes' function. */
#define HAVE_UTIMES 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define if uuid_create() exists. */
#undef HAVE_UUID_CREATE

/* Define if uuid_enc_be() exists. */
#undef HAVE_UUID_ENC_BE

/* Define if uuid_generate_time_safe() exists. */
#undef HAVE_UUID_GENERATE_TIME_SAFE

/* Define to 1 if you have the <uuid.h> header file. */
#undef HAVE_UUID_H

/* Define to 1 if you have the <uuid/uuid.h> header file. */
#undef HAVE_UUID_UUID_H

/* Define to 1 if you have the `wait3' function. */
#define HAVE_WAIT3 1

/* Define to 1 if you have the `wait4' function. */
#define HAVE_WAIT4 1

/* Define to 1 if you have the `waitid' function. */
#undef HAVE_WAITID

/* Define to 1 if you have the `waitpid' function. */
#define HAVE_WAITPID 1

/* Define if the compiler provides a wchar.h header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the `wcscoll' function. */
#undef HAVE_WCSCOLL

/* Define to 1 if you have the `wcsftime' function. */
#undef HAVE_WCSFTIME

/* Define to 1 if you have the `wcsxfrm' function. */
#undef HAVE_WCSXFRM

/* Define to 1 if you have the `wmemcmp' function. */
#define HAVE_WMEMCMP 1

/* Define if tzset() actually switches the local timezone in a meaningful way.
   */
#define HAVE_WORKING_TZSET 1

/* Define to 1 if you have the `writev' function. */
#define HAVE_WRITEV 1

/* Define if libssl has X509_VERIFY_PARAM_set1_host and related function */
#define HAVE_X509_VERIFY_PARAM_SET1_HOST 1

/* Define if the zlib library has inflateCopy */
#define HAVE_ZLIB_COPY 1

/* Define to 1 if you have the `_getpty' function. */
#undef HAVE__GETPTY

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
#undef MAJOR_IN_MKDEV

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
#undef MAJOR_IN_SYSMACROS

/* Define if mvwdelch in curses.h is an expression. */
#undef MVWDELCH_IS_EXPRESSION

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define if POSIX semaphores aren't enabled on your system */
#undef POSIX_SEMAPHORES_NOT_ENABLED

/* Define if pthread_key_t is compatible with int. */
#undef PTHREAD_KEY_T_IS_COMPATIBLE_WITH_INT

/* Defined if PTHREAD_SCOPE_SYSTEM supported. */
#undef PTHREAD_SYSTEM_SCHED_SUPPORTED

/* Define as the preferred size in bits of long digits */
#undef PYLONG_BITS_IN_DIGIT

/* Define if you want to coerce the C locale to a UTF-8 based locale */
#undef PY_COERCE_C_LOCALE

/* Define to printf format modifier for Py_ssize_t */
#define PY_FORMAT_SIZE_T "z"

/* Default cipher suites list for ssl module. 1: Python's preferred selection,
   2: leave OpenSSL defaults untouched, 0: custom string */
#undef PY_SSL_DEFAULT_CIPHERS

/* Cipher suite string for PY_SSL_DEFAULT_CIPHERS=0 */
#undef PY_SSL_DEFAULT_CIPHER_STRING

/* Define if you want to build an interpreter with many run-time checks. */
#undef Py_DEBUG

/* Defined if Python is built as a shared library. */
#undef Py_ENABLE_SHARED

/* Define hash algorithm for str, bytes and memoryview. SipHash24: 1, FNV: 2,
   externally defined: 0 */
#undef Py_HASH_ALGORITHM

/* Define if you want to enable tracing references for debugging purpose */
#undef Py_TRACE_REFS

/* assume C89 semantics that RETSIGTYPE is always void */
#undef RETSIGTYPE

/* Define if setpgrp() must be called as setpgrp(0, 0). */
#undef SETPGRP_HAVE_ARG

/* Define to 1 if you must link with -lrt for shm_open(). */
#undef SHM_NEEDS_LIBRT

/* Define if i>>j for signed int i does not extend the sign bit when i < 0 */
#undef SIGNED_RIGHT_SHIFT_ZERO_FILLS

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `fpos_t', as computed by sizeof. */
#define SIZEOF_FPOS_T 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long double', as computed by sizeof. */
#define SIZEOF_LONG_DOUBLE 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 4

/* The size of `pid_t', as computed by sizeof. */
#define SIZEOF_PID_T 4

/* The size of `pthread_key_t', as computed by sizeof. */
#define SIZEOF_PTHREAD_KEY_T 4

/* The size of `pthread_t', as computed by sizeof. */
#define SIZEOF_PTHREAD_T 4

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 4

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 4

/* The size of `uintptr_t', as computed by sizeof. */
#define SIZEOF_UINTPTR_T 4

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 4

/* The size of `wchar_t', as computed by sizeof. */
#define SIZEOF_WCHAR_T 4

/* The size of `_Bool', as computed by sizeof. */
#define SIZEOF__BOOL 1

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Define if you can safely include both <sys/select.h> and <sys/time.h>
   (which you can't on SCO ODT 3.0). */
#define SYS_SELECT_WITH_SYS_TIME 1

/* Library needed by timemodule.c: librt may be needed for clock_gettime() */
#undef TIMEMODULE_LIB

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
#define TM_IN_SYS_TIME 1

/* Define if you want to use computed gotos in ceval.c. */
#undef USE_COMPUTED_GOTOS

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# undef _ALL_SOURCE
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# undef _GNU_SOURCE
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# undef _POSIX_PTHREAD_SEMANTICS
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# undef _TANDEM_SOURCE
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# undef __EXTENSIONS__
#endif


/* Define if WINDOW in curses.h offers a field _flags. */
#undef WINDOW_HAS_FLAGS

/* Define if you want documentation strings in extension modules */
#undef WITH_DOC_STRINGS

/* Define if you want to compile in DTrace support */
#undef WITH_DTRACE

/* Define if you want to use the new-style (Openstep, Rhapsody, MacOS) dynamic
   linker (dyld) instead of the old-style (NextStep) dynamic linker (rld).
   Dyld is necessary to support frameworks. */
#define WITH_DYLD 1

/* Define to 1 if libintl is needed for locale functions. */
#undef WITH_LIBINTL

/* Define if you want to produce an OpenStep/Rhapsody framework (shared
   library plus accessory files). */
#undef WITH_NEXT_FRAMEWORK

/* Define if you want to compile in Python-specific mallocs */
#undef WITH_PYMALLOC

/* Define if you want pymalloc to be disabled when running under valgrind */
#undef WITH_VALGRIND

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Define if arithmetic is subject to x87-style double rounding issue */
#undef X87_DOUBLE_ROUNDING

/* Define on OpenBSD to activate all library features */
#define _BSD_SOURCE

/* Define on Darwin to activate all library features */
#undef _DARWIN_C_SOURCE

/* This must be set to 64 on some systems to enable large file support. */
#undef _FILE_OFFSET_BITS

/* Define on Linux to activate all library features */
#define _GNU_SOURCE

/* Define to include mbstate_t for mbrtowc */
#undef _INCLUDE__STDC_A1_SOURCE

/* This must be defined on some systems to enable large file support. */
#undef _LARGEFILE_SOURCE

/* This must be defined on AIX systems to enable large file support. */
#undef _LARGE_FILES

/* Define to 1 if on MINIX. */
#undef _MINIX

/* Define on NetBSD to activate all library features */
#undef _NETBSD_SOURCE

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
#undef _POSIX_1_SOURCE

/* Define to activate features from IEEE Stds 1003.1-2008 */
#define _POSIX_C_SOURCE 200809L

/* Define to 1 if you need to in order for `stat' and other things to work. */
#define _POSIX_SOURCE

/* Define if you have POSIX threads, and your system does not define that. */
#undef _POSIX_THREADS

/* framework name */
#define _PYTHONFRAMEWORK ""

/* Define to force use of thread-safe errno, h_errno, and other functions */
#undef _REENTRANT

/* Define to the level of X/Open that your system supports */
#define _XOPEN_SOURCE 700

/* Define to activate Unix95-and-earlier features */
#undef _XOPEN_SOURCE_EXTENDED

/* Define on FreeBSD to activate all library features */
#define __BSD_VISIBLE 1

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
# undef __CHAR_UNSIGNED__
#endif

/* Define to 'long' if <time.h> doesn't define. */
#undef clock_t

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `int' if <sys/types.h> doesn't define. */
#undef gid_t

/* Define to `int' if <sys/types.h> does not define. */
#undef mode_t

/* Define to `long int' if <sys/types.h> does not define. */
#undef off_t

/* Define to `int' if <sys/types.h> does not define. */
#undef pid_t

/* Define to empty if the keyword does not work. */
#undef signed

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t

/* Define to `int' if <sys/socket.h> does not define. */
#undef socklen_t

/* Define to `int' if <sys/types.h> doesn't define. */
#undef uid_t


/* Define the macros needed if on a UnixWare 7.x system. */
#if defined(__USLC__) && defined(__SCO_VERSION__)
#define STRICT_SYSV_CURSES /* Don't use ncurses extensions */
#endif

#define DONT_HAVE_FSTAT 1
#define DONT_HAVE_STAT  1

#define PLATFORM "riscos"

#endif /*Py_PYCONFIG_H*/

