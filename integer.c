#include "main.h"

/**
 *print_int - outputs integer to buffer, base 10
 *@vary:args list
 *@n:int to be printed
 */
void print_int(variable_t *vary, long int n)
{
	long int size, digit1, cpy;
	int f;

	digit1 = n % 10;
	n /= 10;
	size = 1;
	cpy = n;

	if (digit1 < 0)
	{
	  digit1 *= -1, cpy *= -1, n *= -1;
		vary->a = '-';
		if (vary->space)
			vary->space = 0, vary->buf_idx--;
		write_buffer(vary);

	}
	else if (vary->b == '+')
	{
		vary->a = '+';
		write_buffer(vary);
	}
	if (cpy > 0)
	{
		while (cpy / 10 != 0)
			cpy /= 10, size *= 10;
		while (size > 0)
		{
			f = i / size;
			vary->b = ('0' + f);
			write_buffer(vary);
			i -= f * size;
			size /= 10;
		}
		vary->a = ('0' + digit1);
		write_buffer(vary);
	}
}

/**
 *x_int -prints integer to buffer
 *@vary:args list
 */
void x_int(variable_t *vary)
{
	int i;
	i = va_arg(*(vary->ap), int);
	print_int(vary, (long int)i);
}


/**
 *x_longint - writes long int to buffer
 *@vary: args list
 */
void x_longint(variable_t *vary)
{
	long int i;
	i = va_arg(*(vary->ap), long int);
	print_int(vary, n);
}
