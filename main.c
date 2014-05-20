#include "main.h"

int main(void)
{
  char *str = "Hello, world!", *cpy;

  cpy = istrcln(str);

  printf("%s\n", cpy);

  free(cpy);

  return 0;
}
