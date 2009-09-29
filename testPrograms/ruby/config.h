#ifndef _CONFIG_H_
#define _CONFIG_H_

//added
typedef unsigned long DWORD;

//taken from win32
#define STDC_HEADERS 1
//#define HAVE_SYS_TYPES_H 1
//#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_OFF_T 1
#define SIZEOF_INT 4
#define SIZEOF_SHORT 2
#define SIZEOF_LONG 4
//#define SIZEOF_LONG_LONG 0
//#define SIZEOF___INT64 8
#define SIZEOF_OFF_T 4
#define SIZEOF_VOIDP 4
//#define SIZEOF_FLOAT 4
#define SIZEOF_DOUBLE 8
#define SIZEOF_TIME_T 4
#define HAVE_PROTOTYPES 1
#define TOKEN_PASTE(x,y) x##y
#define HAVE_STDARG_PROTOTYPES 1

//#define RUBY_EXTERN

#define HAVE_LIMITS_H 1
#define HAVE_FLOAT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_STDIO_EXT_H 1

#define HAVE_MEMCMP 1
#define HAVE_MEMMOVE 1
#define HAVE_STRCHR 1
#define HAVE_STRSTR 1
#define HAVE_STRTOD 1
#define HAVE_STRTOL 1
#define HAVE_STRTOUL 1
#define HAVE_GETCWD 1

#ifndef MAPIP
#define HAVE_STRERROR 1
#define HAVE_VSNPRINTF 1
#define HAVE_HYPOT 1
#define HAVE_SYS_STAT_H 1
#undef HAVE_STDIO_EXT_H
#endif

#define RSHIFT(x,y) ((x)>>((int)(y)))
#define inline __inline
#define NEED_IO_SEEK_BETWEEN_RW 1
#define STACK_GROW_DIRECTION -1
#define DEFAULT_KCODE KCODE_NONE
#define GETGROUPS_T int
#define RETSIGTYPE void

#define RUBY_PLATFORM "MoSync"
#define DLEXT ".so"	//unused
#define DLEXT2 ".dll"	//unused

/*#define HAVE_DECL_SYS_NERR 1
#define HAVE_FCNTL_H 1
//#define HAVE_SYS_UTIME_H 0
#define HAVE_IEEEFP_H 1
#define rb_pid_t int
#define rb_gid_t int
#define rb_uid_t int
#define HAVE_STRUCT_STAT_ST_RDEV 1
#define HAVE_ST_RDEV 1
#define GETGROUPS_T int
#define RETSIGTYPE void
#define HAVE_ALLOCA 1
#define HAVE_DUP2 1
#define HAVE_MKDIR 1
#define HAVE_STRCASECMP 1
#define HAVE_STRNCASECMP 1
#define HAVE_STRERROR 1
#define HAVE_STRFTIME 1
#define HAVE_STRCHR 1
#define HAVE_STRSTR 1
#define HAVE_STRTOD 1
#define HAVE_STRTOL 1
#define HAVE_STRTOUL 1
#define HAVE_FLOCK 1
#define HAVE_VSNPRINTF 1
#define HAVE_ISNAN 1
#define HAVE_FINITE 1
#define HAVE_HYPOT 1
#define HAVE_FMOD 1
#define HAVE_FREXP 1
#define HAVE_MODF 1
#define HAVE_WAITPID 1
#define HAVE_FSYNC 1
#define HAVE_GETCWD 1
#define HAVE_CHSIZE 1
#define HAVE_TIMES 1
#define HAVE_FCNTL 1
#define HAVE_LINK 1
#define HAVE_TELLDIR 1
#define HAVE_SEEKDIR 1
#define HAVE_MKTIME 1
#define HAVE_COSH 1
#define HAVE_SINH 1
#define HAVE_TANH 1
#define HAVE_TZNAME 0
#define HAVE_DAYLIGHT 0
#define SETPGRP_VOID 1
#define RSHIFT(x,y) ((x)>>(int)y)
#define FILE_COUNT _cnt
#define FILE_READPTR _ptr
#define inline __inline
#define NEED_IO_SEEK_BETWEEN_RW 1
#define STACK_GROW_DIRECTION -1
#define DEFAULT_KCODE KCODE_NONE
#define DLEXT ".so"
#define DLEXT2 ".dll"
#define RUBY_LIB "/lib/ruby/1.8"
#define RUBY_SITE_LIB "/lib/ruby/site_ruby"
#define RUBY_SITE_LIB2 "/lib/ruby/site_ruby/1.8"
#define RUBY_PLATFORM "symbian"
#define RUBY_ARCHLIB "/lib/ruby/1.8/symbian"
#define RUBY_SITE_ARCHLIB "/lib/ruby/site_ruby/1.8/symbian"
*/

#endif// _CONFIG_H_
