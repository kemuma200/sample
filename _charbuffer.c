#include "main.h"

/**
 *p_char - outputs char to buffer
 *@vary: arg list
 */
void p_char(variable_t *vary)
{
	vary->a = va_arg(*(vary->ap), int);
	write_buffer(vary);
}

/**
 *p_percent - outputs the percent symbol
 *@vary: args list
 */
void p_percent(variable_t *vary)
{
	vary->a = '%';
	if (vary->space)
	{
		vary->space = 0;
		vary->buff[--(vary->buf_idx)] = '\0';
	}
	write_buffer(vary);
}
