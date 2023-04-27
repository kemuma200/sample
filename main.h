#ifndef __MAIN_H_
#define __MAIN_H_

/*standard libraries*/
#include <stdio.h>
#include <stddef.h>
#include <stdargs.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/*macro section*/
#define BUFFSIZE 1024
#define _lowhex 0
#define _uphex 1

/*struct section*/
/**
 *_variables - list of all variables
 *@fmt:string format input
 *@i:index of string
 *@buff:buffer
 *@buf_idx: buffer index
 *@a:char written to buffer
 *@b:char after the % character
 *@c:char two spaces after % char
 *@d: unused char
 *@flag:checks if flag was modifies
 *@space:checks if spce has been printed
 *@error: 1 if error, 0 otherwise
 *@ap: args list
 */
typedef struct _variables
{
	const char *fmt;
	int i;
	va_list *ap;
	char *buff;
	int buf_idx;
	int error;
	char a;
	char b;
	char c;
	char d;
	int flag;
	int space;
} variable_t;

/**
 *parser - print specifiers and paired function
 *@ch: specifier
 *@func: pointer to conversion specifier
 */
typedef struct parser
{
	char p;
	int (*func)(__attribute__((unused))variable_t *vary);

} parser_t;

/*basic functions */
int _printf(const char *format, ...);
variable_t *init_variable(va_list *ap, const char *format);

/*memory allocation*/
void *_malloc(unsigned int x * unsigned int size);
void write_buffer(variable_t *vary);
void put_buffer(variable_t *vary, char *s);

/*string functions*/
int rev_string(__attribute__((unused))char *s);
int _strlen(char *s);
int _strlenconstant(const char *s);
int _putchar(char *s);
int _putmod(__attribute__((unused))char *s, unsigned int i);

/*hexadecimal*/
void print_hex(variable_t *vary, unsigned long int i, int hexcase, int size);
void x_lowhex(variable_t *vary);
void x_uphex(variable_t *vary);
void x_longlowhex(variable_t *vary);
void x_longuphex(variable_t *vary);

/*octals*/
void print_oct(variable_t *vary, unsigned long int i, int size);
void x_oct(variable_t *vary);
void x_longoct(variable_t *vary);

/*integers*/
void print_int(variable_t *vary, long int n);
void x_int(variable_t *vary);
void x_longint(variable_t *vary);
void print_unsigned(variable_t *vary, unsigned long int n);
void x_uint(variable_t *vary);
void x_ulongint(variable_t *vary);

/*specifier functions*/
void p_char(variable_t *vary);
void p_string(variable_t *vary);
void p_hexstring(variable_t *vary);
void p_pointer(variable_t *vary);
void p_revstring(variable_t *vary);
void p_rot13(variable_t *vary);
void p_percent(variable_t *vary);
void p_bin(variable_t *vary);

/*matching*/
void (*matcher)(variable_t *vary)(variable_t *vary);
void parse_specifier(variable_s *vary);


#endif
