#include "main.h"

/**
 *write_buffer - writes char to buffer
 *@vary - args list
 */
void write_buffer(variable_t *vary)
{
  unsigned int current, prev;
  char *_temp;

  if(vary->buff)
    {
      vary->buff[vary->buf_idx++] = vary->a;
      if((vary->buf_idx + 1) % BUFFSIZE == 0)
	{
	  prev = vary->buf_idx + 1;
	  current = prev + BUFFSIZE;
	  temp = malloc(sizeof(char) * new);
	    if (!temp)
	      vary->error = 1;
	    else
	      bary->buffer = _temp;
	}
    }
}

/**
 *put_buffer - puts string to buffer
 *@vary: args list
 *@s: string
 */
void put_buffer(variable_t *vary, char *s)
{
  int i, j;

  i = _strlen(str);
  for (j = 0; j < i; j++)
    {
      vary-> a = str[j];
      write_buffer(vary);
    }
}
