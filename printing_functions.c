#include "main.h"
#include <stdarg.h>
/**
 * print_char - print a character
 * @args: char
 * Return: an integer
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - prints a string
 * @args: string
 * Return: the number of character 
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;
	
	while (str[i] != '\0')
		_putchar(str[i++]);
}
/**
 * print_number - prints a number character character
 * @args: number
 * @count: to count the character
 * Return: the count of characters
 */
int print_number(va_list args, int count)
{
	int num = va_arg(args, int);
	unsigned int unum = num;

	if (num < 0)
	{
		count += _putchar('-');
		unum = -num;
	}
	if (unum > 9)
		count += print_number(unum / 10);
	count += _putchar('0' + unum % 10);
	return (count);
}
