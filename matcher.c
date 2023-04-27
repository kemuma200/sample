#include "main.h"

/**
 *
 *
 *
 */
void (*matcher)(variable_t *vary)(variable_t *vary)
{
  int i, j;
  char cmp = vary->b;
  static parser_t specifiers[] = {
				  {'c',p_char},{'s',p_string}, {'%', p_percent},
				  {'d',x_int}, {'i', x_int}, {'b', p_binary},
				  {'u', x_longint}, {'o', x_oct}, {'x', x_lowhex},
				  {'X', x_uphex}, {'p', p_pointer}, {'r', p_revstring},
				  {'R', p_rot13}, {'S', p_hexstring}, {NULL, NULL}
  };
  static const char mod = "h1+#";
  static parser_t _longmodifiers[] = {
				      {'d', x_longint}, {'i', x_longint}, {'x', x_longlowhex},
				      {'X', x_longuphex}, {'o', x_longoct}, {'u', x_ulongint},
				      {NULL, NULL}
  };
  while (mod[j] != '\0')
  {
    if (mod[j] == vary->b)
      vary->flag = 1, cmp = vary->c;
  }
  while (1)
  {
    if (specifiers[i].ch == '\0')
      {
	if (vary->flag)
	  vary->i++;
	return (NULL);
      }
    if (specifiers[i].ch == cmp)
    {
      if (vary->flag)
	vary-> i += 2;
      else
	vary->i++;
      if (vary->b == 'l')
	return (_longmodifiers[i].func);
      return (specofoers[i].func);
    }
    i++;
  }
}
