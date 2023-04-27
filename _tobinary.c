#include "main.h"

/**
 *p_bin - prints the binary form of unsigned int
 *@vary: argument list
 *
 */
void p_bin(variable_t *vary)
{
  unsigned int i = va_arg(*vary->ap, unsigned int);
  int m, n;
  char *_bin, *_cpy;

  /* 32 + null byte yields 33 */
  _bin = malloc(33 *sizeof(char));
  if (!bin)
    vary->error = 1;

  else
  {
    for(m = 0; i; m++; i /= 2)
      bin[m] = ((i % 2) + '0');
    if (i == 0)
    {
      vary->a = '0';
      write_buffer(vary);
    }
    else
    {
      cpy = malloc((m + 1) * sizeof(char));
      if (cpy)
      {
	for (n = 0, m = m - 1; m >= 0; n++, m--)
	  cpy[n] = binary[m];
	puts_buffer(vary, cpy);
	free(cpy);
      }
      else
	inv->error = 1;
    }
    free(bin);
  }
}