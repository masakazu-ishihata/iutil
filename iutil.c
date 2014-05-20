#include "iutil.h"

/*----------------------------------------------------------------------------*/
/* memory */
/*----------------------------------------------------------------------------*/
/* malloc */
void *imalloc(size_t _size, const char *_msg)
{
  void *p;
  if( (p = malloc(_size)) == NULL){
    perror(_msg);
    exit(EXIT_FAILURE);
  }

  return p;
}
int *int_new(int _i)
{
  int *p;

  p = (int *)imalloc(sizeof(int), "int_new");
  *p = _i;

  return p;
}
double *double_new(double _d)
{
  double *p;

  p = (double *)imalloc(sizeof(double), "double_new");
  *p = _d;

  return p;
}
void *iary_new(int _l, size_t _size)
{
  void *p;

  p = (void *)imalloc(_l * _size, "iary_new");

  return p;
}

/*----------------------------------------------------------------------------*/
/* file */
/*----------------------------------------------------------------------------*/
FILE *ifopen(const char *_name, const char *_mode)
{
  FILE *fp;
  if((fp = fopen(_name, _mode)) == NULL){
    perror("ifopen");
    exit(EXIT_FAILURE);
  }

  return fp;
}
/*----------------------------------------------------------------------------*/
/* string */
/*----------------------------------------------------------------------------*/
/* clone */
char *istrcln(const char *str)
{
  int len;
  char *p;

  len = strlen(str) + 2;
  if( (p = (char *)malloc(len * sizeof(char)) ) == NULL){
    exit(EXIT_FAILURE);
  }
  strcpy(p, str);

  return p;
}

/*----------------------------------------------------------------------------*/
/* time */
/*----------------------------------------------------------------------------*/
double itime_get(void)
{
  struct timeval tv;
  gettimeofday(&tv,NULL);
  return tv.tv_sec + tv.tv_usec * 1e-6;
}
