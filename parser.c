#include "main.h"

/**
 *parse_specifier - parse characters that fall after % symbol
 *@vary: args
 */
void parse_specifier(variable_t *vary)
{
	int i = vary->i + 1, j;
   	int space = 0;
   	static const char flags[] = "hl+#-";

	/**should add precision and width functionality here*/
	
	vary->space = 0;
	vary->width = 0;
	vary->precision = 0;
	while (vary->fmt[i] == ' ')
	  i++, vary->i++, space = 1;

	vary->b = vary->fmt[i++];

	if (space && ((vary->b != '+') || (vary->a != '-')))
	{
		space = 0, vary->space = 1, vary->a = ' ';
		write_buffer(vary);
	}
	for (j = 0; flags[j] != '\0'; j++)
	{
		if(vary->b == flags[j])
		{
			while (vary->fmt[i] == ' ')
			{
				i++;
				vary->i++, space = 1;
			}
			if(space && (vary->b != '+' || vary->b != '-'))
			{
				vary->a = ' ';
				write_buffer(vary);
			}
			break;
		}
	}
	vary->c = vary->b ? vary->fmt[i++] : '\0';
	vary->d = vary->c ? vary->fmt[i] : '\0';
}

