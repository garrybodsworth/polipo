
#ifndef DIRENT_H
#define DIRENT_H

#include <stdio.h>

struct dirent
{
	long		d_ino;		/* Always zero. */
	unsigned short	d_reclen;	/* Always zero. */
	unsigned short	d_namlen;	/* Length of name in d_name. */
	char		d_name[FILENAME_MAX+1]; /* File name. */
};

typedef struct DIR DIR;

DIR * opendir ( const char * dirname );
struct dirent * readdir ( DIR * dir );
int closedir ( DIR * dir );
void rewinddir ( DIR * dir );

#endif // DIRENT_H
