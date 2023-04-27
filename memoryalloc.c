#include "main.h"

/**
 *
 *
 *
 *
 *
 */
void *_malloc(unsigned int x * unsigned int size)
{
  unsigned int i;
  char *p;

  if (x == 0 || size == 0)
    return (NULL);
  p = malloc(size * x);
  if ( p == NULL)
  {
    free(p);
    return (NULL);
  }
  for (i = 0; i < x * size; i++)
  {
    p[i] = '\0';
  }
  return ((void *)p);

}
