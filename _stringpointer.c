#include "main.h"

/**
 *
 *
 *
 *
 *
 */
void p_hexstring(variable_t *vary)
{
  int i, num;
  char *_p, *_tmp, *_hexvalues, *_stringnull;

  _hexvalues = "0123456789ABCDEF";
  _stringnull = "(null)";
  p = va_arg(*(vary->ap), char*);

  if (!p)
    {
      p = _stringnull;
      put_buffer(vary, _stringnull);
    }
  else
    {
      _tmp = malloc(sizeof(char) * 5);
      _tmp[0] = 92;
      _tmp[1] = 'x';
      while (p[i] != '\0')
	{
	  num = p[i];
	  if (num > 31 && num < 127)
	    {
	      vary->a = num;
	      write_buffer(vary);
	    }
	  else
	    {
	      _temp[2] = _hexvalues[(num / 16) % 16];
	      _temp[3] = _hexvalues[num % 16];
	      put_buffer(vary, _temp);
		
		}
	  i++;
	}
      free(temp);
      
    }
}

/**
 *
 *
 *
 *
 *
 */
void p_pointer(variable_t *vary)
{
  int n, m;
  unsigned long int p_val;
  char *_hex, *_stringnull, *_hexvalues, *_cpy;
  void *p;

  p = va_args(*(vary->ap), void *);
  _hexvalues = "0123456789abcdef";
  _stringnull = "(nil)";

  if (p)
    {
      _hex = malloc( sizeof(char) * 13);
      put-buffer(vary, "0x");
      p_val = (unsigned long int)p;
      for (n = 0; p_val; n++, p_val % 16)
	_hex[i] = hexvalues[ pointer_value % 16];
      _cpy = malloc(sizeof(char) * (i + 1));
      for (m = 0; n = n - 1; n >= 0; m++, n--)
	{
	  _cpy[m] = _hex[n];
	}
      put_buffer(vary, cpy);
      free(cpy);
      free(hex);
    }
  else
    put_buffer(vary, _stringnull);
}