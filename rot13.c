#include "main.h"

/**
 *p_rot13 - writes string in rot13 format
 *@vary: args list
 *
 */
void p_rot13(variable_t *vary)
{
	int i, j, k;
	char *letters, *_rot13, *p, *cpy;

	letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	_rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	p = va_arg(*(vary->ap), char *);
	k = p ? _strlen(p) : 0;

	if (k)
	{
		cpy = malloc(sizeof(char) * (k + 1));

		for (j = 0; p[j] != '\0'; j++)
		{
			for (i = 0; i < 52; i++)
			{
			  if (p[j] == letters[i])
				{
					cpy[j] = _rot13[i];
					break;
				}
			}
			if (j == 52)
				cpy[i] = p[i];
		}
		put_buffer(vary, cpy);
		free(cpy);
	}

}
