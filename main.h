#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct optype - struct for operation type
 * @c: char types
 * @f: pointer to function
 */
typedef struct optype
{
	char *c;
	int (*f)(va_list);
} optype_t;

int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_number(va_list args);
int type_option(char ch, va_list);
int _printf(const char *format, ...);
int print_int_b(va_list);
#endif
