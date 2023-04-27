#include "main.h"

/**
 * print_oct - unsigned long int to buffer, base 8
 *@vary: args list
 *@i: integer to be printed
 *@size: size sent to malloc
 */
void print_oct(variable_t *vary, unsigned long int i, int size)
{
	int m, n;
	char *oct, *cpy;

	if(i)
	{
		oct = malloc (size * sizeof(char));
		if (oct)
		{
			for (m = 0; i; m++, i /= 8)
				oct[m] = (i % 8 + '0');
			cpy = _malloc((i + 1), sizeof(char));
			if (cpy)
			{
				for (n = 0, m--; m >= 0; n++, m--)
					cpy[n] = oct[m];
				if (vary->b == '#')
				{
					vary->a = '0';
					write_buffer(vary);
				}

				put_buffer(vary, cpy);
				free(cpy);
			}
			else
				vary->error = 1;
			free(oct);
		}
		else
			vary->error = 1;
	}
	else
	{
		vary->a = '0';
		write_buffer(vary);
	}
  
}


/**
 *x_oct - unsigned int to buffer, base 8
 *@vary: args list
 *
 */
void x_oct(variable_t *vary)
{
	unsigned int k;
	k = va_arg(*(vary->ap), int);
	print_oct(vary, (unsigned long int)k, 12);
}

/**
 *x_longoct - unsigned long int to buffer, base 8
 *@vary: args list
 *
 *
 */
void x_longoct(variable_t *vary)
{
	unsigned int k;
	k = va_arg(*(vary->ap), unsigned long int);
	print_oct(vary, k, 23);
}
