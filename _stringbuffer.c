#include "main.h"

/**
 *p_string - outputs string to buffer
 *@vary: args
 */
void p_string(variable_t *vary)
{
	int i;
	char *_p, *_nullstring;

	_p = va_arg(*(vary->ap), char *);
	_stringnull = "(null)";

	if (p == NULL)
		p = _stringnull;

	i = _strlen(p);
	if (i)
		put_buffer(vary, p);
}
