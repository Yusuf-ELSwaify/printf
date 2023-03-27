#include "main.h"
/**
 * type_option - look for the option
 * @ch: character string format
 * @args: arguments
 * Return: number of characters
 */
int type_option(char ch, va_list args)
{
	unsigned int i = 0, num = 0;

	optype_t list[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_number},
		{"i", print_number},
		{"b", print_int_b},
		{0, 0}
	};

	while (list[i].c)
	{
		if (ch == list[i].c[0])
			return (num += list[i].f(args));
		i++;
	}
	num += _putchar('%');
	return (num += _putchar(ch));
}
