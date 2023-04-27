#include "main.h"

/**
 *p_revstring - writes reversed string to buffer
 *@vary: args list
 *
 */
void p_revstring(variable_t *vary)
{
	int i = 0, j, len;
	char *p, *cpy;

	p = va_arg(*(vary->ap), char *);

	len = _strlen(p);
	if (len == 1)
	{
		vary->a = p[0];
		write_buffer(vary);
	}
	else
	{
		cpy = malloc((len + 1) * sizeof(char));
		for (i = len - 1, j = 0; i >= 0; i--, j++)
			cpy[j] = p[i];
		puts_buffer(vary, cpy);
		free(cpy);
	}
}
