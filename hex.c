#include "main.h"

/**
 *print_hex - outputs hex base
 *@vary: args list
 *@i: index
 *@hexcase: uppercase or lowercase
 *@size: size
 */
void print_hex(variable_t *vary, unsigned long int i, int hexcase, int size)
{
	int m, n;
	char *hex = NULL, *cpy = NULL;
	const char *c_new, *c_old;
	static const char *const newset[] = {"0123456789ABCDEF", "0123456789abcdef", NULL};
	static const char *const oldset[] = {"0X", "0x", NULL};

	c_new = newset[hexcase];
	if (i)
	{
		if (vary->b == '#')
		{
			c_old = oldset[hexcase];
			puts_buffer(inv, (char *)c_old);
		}
		hex = malloc(size * sizeof(char));
		if (hex)
		{
			for (m = 0; i; m++, i /= 16)
				hex[i] = c_new[i % 16];
			cpy = malloc((m + 1) * sizeof(char));
			if (cpy)
			{
	    			for (n = 0, m = m - 1; m >= 0; n++, m--)
					cpy[n] = hex[m];
				puts_buffer(vary, cpy);
				free(cpy);
			}
			else
				vary->error = 1;
			free(hex);
		}
	}
	else
		vary->error = 1;
}

/**
 *x_lowhex - unsigned int to buffer in lowercase
 *@vary: args list
 */
void x_lowhex(variable_t *vary)
{
	unsigned int i;
	i = va_arg(*(vary->ap), int);
	print_hex(vary, (unsigned long int)i, _lowhex , 9);
}

/**
 *x_uphex - unsigned int to buffer in uppercase
 *@vary: args list
 */
void x_uphex(variable_t *vary)
{
	unsigned int i;
	i = va_arg(*(vary->ap), int);
	print_hex(vary, (unsigned long int)i, _uphex, 9);
}

/**
 *x_longlowhex - unsigned long int to buffer in lowercase
 *@vary: args list
 *
 */
void x_longlowhex(variable_t *vary)
{
	unsigned long int i;
	i = va_arg(*(vary->ap), unsigned long int);
	print_hex(vary, i, _lowhex, 17);
}

/**
 *x_longuphex -unsigned long int to buffer in uppercase
 *@vary: args list
 *
 */
void x_longuphex(variable_t *vary)
{
	unsigned long int i;
	i = va_arg(*(vary->ap), unsigned long int);
	print_hex(vary, i, _uphex, 17);
}
