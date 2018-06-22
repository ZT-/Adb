
#ifndef _WIN32_ADB_H_
#define _WIN32_ADB_H_

#pragma warning(disable: 4996)
#pragma warning(disable: 4244)


#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 
#endif

#define __inline__    _inline

//#define snprintf      _snprintf
#define strcasecmp		stricmp
#define ssize_t         size_t

#define PATH_MAX       MAX_PATH
#define STDIN_FILENO 0 /* Standard input. */
#define STDOUT_FILENO 1 /* Standard output. */
#define STDERR_FILENO 2 /* Standard error output. */

typedef unsigned char  uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int   uint32_t;

typedef unsigned int   mode_t;

/* Values for the second argument to access.
   These may be OR'd together.  */
#define	R_OK	4		/* Test for read permission.  */
#define	W_OK	2		/* Test for write permission.  */
#define	X_OK	1		/* Test for execute permission.  */
#define	F_OK	0		/* Test for existence.  */

#define	__S_ISTYPE(mode, mask)	(((mode) & _S_IFMT) == (mask))

#define	S_ISDIR(mode)	 __S_ISTYPE((mode), _S_IFDIR)
#define	S_ISCHR(mode)	 __S_ISTYPE((mode), _S_IFCHR)
#define	S_ISBLK(mode)	 0 //__S_ISTYPE((mode), _S_IFBLK)
#define	S_ISREG(mode)	 __S_ISTYPE((mode), _S_IFREG)


#endif // _WIN32_ADB_H_