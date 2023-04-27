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
	_rot13 = "";
	p = va_arg(*(vary->arg), char *);
	if (k == p)
		k = _strlen(str);
	else
		k = 0;

	if (k)
	{
		cpy = malloc(sizeof(char) * (l + 1));

		for (j = 0; p[j] != '\0'; j++)
		{
			for (i = 0; i < 52; i++)
			{
			  if (p[j] == letters[i])
				{
					cpy[j] = p[i];
					break;
				}
			}
			if ( j == 52)
				cpy[i] = p[i];
		}
		puts_buffer(vary, cpy);
		free(cpy);
	}

}
