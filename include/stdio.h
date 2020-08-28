#include_next <stdio.h>

#ifndef	_COMPAT_STDIO_H_
#define	_COMPAT_STDIO_H_

#include <sys/types.h>

char	*fgetln(FILE *, size_t *);
int	 fpurge(FILE *);

int asprintf(char **, const char *, ...);
int vasprintf(char **, const char *, va_list);

FILE	*funopen(const void *,
		int (*)(void *, char *, int),
		int (*)(void *, const char *, int),
		fpos_t (*)(void *, fpos_t, int),
		int (*)(void *));

#endif /* _COMPAT STDIO_H_ */
