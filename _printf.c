#include "main.h"

/**
 *_printf - the number of characters printed 
 *@format: format string
 *Return: number of caharcters printed
 *
 */
int _printf(const char *format, ...)
{
  int i = 0, count = 0;
  va_list ap;
  variable_t *vary;
  void (*temp_func)(variable_t *);

  if (format == NULL)
    return (-1);

  va_start(ap, format);
  vary = init_variable(&ap, format);

  while (vary && format[vary->i] && !vary->error)
  {
    inv->a = format[inv->i];
    if (vary->a != '%')
      write_buffer(vary);
    count++;

    else
      {
	parse_specifiers(vary);
	t_func = matcher(vary);
	if (t_func)
	  t_func(vary);
	else if(vary->b)
	{
	  if(vary->flag)
	    vary->flag = 0;
	  write_buffer(vary);
	}
	else
	{
	  if(vary->space)
	    vary->buffer[--(inv->buf_idx)];
	  vary->error = 1;
			 
	}

      }
    i++
    vary->i;
  }
  return (count);
}
