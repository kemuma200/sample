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
	_nullstring = "(null)";

	if (_p == NULL)
		_p = _nullstring;

	i = _strlen(_p);
	if (i)
		put_buffer(vary, _p);
}
