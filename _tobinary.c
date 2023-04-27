#include "main.h"

/**
 *p_bin - prints the binary form of unsigned int
 *@vary: argument list
 *
 */
void p_bin(variable_t *vary)
{
	unsigned int i = va_arg(*vary->ap, unsigned int);
	int m, n;
	char *_bin, *_cpy;

	/* 32 + null byte yields 33 */
	_bin = malloc(33 * sizeof(char));
	if (!_bin)
		vary->error = 1;

	else
	{
		for(m = 0; i; m++, i /= 2)
			_bin[m] = ((i % 2) + '0');
		if (i == 0)
		{
			vary->a = '0';
			write_buffer(vary);
		}
		else
		{
			_cpy = malloc((m + 1) * sizeof(char));
			if (_cpy)
			{
				for (n = 0, m = m - 1; m >= 0; n++, m--)
					_cpy[n] = _bin[m];
				put_buffer(vary, _cpy);
				free(_cpy);
			}
			else
				vary->error = 1;
		}
		free(_bin);
	}
}
