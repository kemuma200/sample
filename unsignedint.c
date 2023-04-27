#include "main.h"

/**
 *print_unsigned - writes unsigned long ints to buffer
 *@vary: arg list
 *@n: unsigned long int
 */
void print_unsigned(variable_t *vary, unsigned long int n)
{
	unsigned long int cpy, size;
	int digit1;

	size = 1;
	cpy = n;
	if (n > 10)
	{
		while (cpy / 10 != 0)
			cpy /= 10, size *= 10;
		if (size > 0)
		{
	  		digit1 = n / size;
			vary->a = (digit1 + '0');
			write_buffer(vary);
			n -= digit1 * size;
			size /= 10;
		}
	}
	else
	{
		vary->a = (n + '0');
		write_buffer(vary);
	}
}

/**
 *x_uint - prints unsignedint to buffer in decimal form
 *@vary: args list
 */
void x_uint(variable_t *vary)
{
	unsigned int i;

	i = va_arg(*(vary->ap), int);
	print_unsigned(vary, (unsigned long int)i);
}

/**
 *x_longint - prints long uint to buffer in decimal form
 *@vary: args list
 */
void x_ulongint(variable_t *vary)
{
	unisgned long int i;

	i = va_arg(*(vary->ap), unigned long int);
	print_unsigned(vary, n);
}
