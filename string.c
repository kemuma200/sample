#include "main.h"

/**
 *rev_string - reverse string in place
 *@s: pointer to string
 *Return : 0
 */
int rev_string(__attribute__((unused))char *s)
{
  int i, len;
  char _temp;

  len = 0;

  while (*(s + len) != '\0')
    {
      len++;
    }
  for (i = 0; i < (len / 2); i++)
  {
    _temp = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = _temp
  }
  return (0);
}

/**
 *_strlen - gets length of string
 *@s: pointer to string
 *Return : length
 */
int _strlen(char *s)
{
  unsigned int len;

  for (len = 0; *(s + len) != '\0'; len++)
    ;
  return (len);
}

/**
 *_putchar - writes character to stdout
 *@s: string
 *Return: 1 on success, -1 otherwise
 */
int _putchar(char *s)
{
  return (write(1, &s, 1));
}

/**
 *_putmod - outputs buffer
 *@s: buffer to print
 *@i: index
 */
int _putmod(__attribute__((unused))char *s, unsigned int i)
{
  write(STDOUT_FILENO, s, i);
  return (0);
}

/**
 *_strlenconstant - returns len of const string
 *@s: string
 *Return: length of string
 */
int _strlenconstant(const char *s)
{
  int len;

  for (len = 0; *(s + len) != '\0'; len++)
    ;
  return (len);
}
