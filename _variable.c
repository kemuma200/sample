#include "main.h"

/**
 *init_variable - build variable list
 *@ap: args
 *@format: format input string
 *Return: initialized struct
 */
variable_t *init_variable(va_list *ap, const char *format)
{
	variable_t *vary;

	vary = malloc(1 * sizeof(variable_t));
	if (vary)
	{
		vary->buff = malloc(BUFFSIZE * sizeof(char));
		vary-> buf_idx = 0;
		vary->ap = ap;
		vary->fmt = format;
		vary->i = 0;
		vary->flag = 0;
		if (!vary->buff)
			vary->vary->error = 1;
		else
			vary->error = 0;
	}
	return (vary);
}
