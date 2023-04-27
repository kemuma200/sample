#include "main.h"

/**
 *_printf - the number of characters printed 
 *@format: format string
 *Return: number of caharcters printed
 *
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list ap;
	variable_t *vary;
	void (*temp_func)(variable_t *);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	vary = init_variable(&ap, format);

	while (vary && format[vary->i] && !vary->error)
	{
		vary->a = format[vary->i];
		count++;
		if (vary->a != '%')
		{
			write_buffer(vary);
		}
		else
		{
			parse_specifier(vary);
			temp_func = matcher(vary);
			if (temp_func)
				temp_func(vary);
			else if(vary->b)
			{
				if(vary->flag)
					vary->flag = 0;
				write_buffer(vary);
			}
			else
			{
				if(vary->space)
					vary->buff[--(vary->buf_idx)] = '\0';
				vary->error = 1;

			}
		}
		vary->i++;
	}
	va_end(ap);
	return (count);
}
