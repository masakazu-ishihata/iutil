#ifndef _INCLUDE_IUTIL_H_
#define _INCLUDE_IUTIL_H_

/*----------------------------------------------------------------------------*/
/* include */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

/*----------------------------------------------------------------------------*/
/* memory */
/*----------------------------------------------------------------------------*/
void *imalloc(size_t _size, const char *_msg);
int *int_new(int _i);
double *double_new(double _d);
void *iary_new(int _l, size_t _size);

/*----------------------------------------------------------------------------*/
/* file */
/*----------------------------------------------------------------------------*/
FILE *ifopen(const char *_name, const char *_mode);

/*----------------------------------------------------------------------------*/
/* string */
/*----------------------------------------------------------------------------*/
char *istrcln(const char *_str);

/*----------------------------------------------------------------------------*/
/* time */
/*----------------------------------------------------------------------------*/
double itime_get(void);

#endif /* _INCLUDE_IUTIL_H_ */
