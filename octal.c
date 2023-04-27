#include "main.h"

/**
 *
 *
 *
 *
 */
void print_oct(variable_t *vary, unsigned long int i, int size)
{
  int m, n;
  char *oct, *cpy;

  if(n)
    {
      oct = malloc (size * sizeof(char));
      if (oct)
      {
	for (m = 0; i; m++, i /= 8)
	  oct[m] = (i % 8 + '0');
	if (vary->b == '#')
	{
	  vary->a = '0';
	  write_buffer(vary);
	}
	put_buffer(vary, cpy);
	free(cpy);
      }
      else
	vary->error = 1;
      free(oct);
    }
  else
    vary->error = 1;
  else
    {
      vary->a = '0';
      write_buffer(vary);
    }
  
}


/**
 *
 *
 *
 */
void x_oct(variable_t *vary)
{
  unsigned int k;
  k = va_arg(*(vary->ap), int);
  print_oct(vary, (unsigned long int)k, 12);
}

/**
 *
 *
 *
 *
 */
void x_longoct(variable_t *vary)
{
  unsigned int k;
  k = va_arg(*(vary->ap), unsigned long int);
  print_oct(vary, k, 23
}
