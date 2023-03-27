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
	int count = 0;
	
	while (*str != '\0')
		count += _putchar(*str++);
	return (count);
}
/**
 * _print_number - prints a number character character
 * @num: number
 * @count: to count the character
 * Return: the count of characters
 */
int _print_number(int num, int count)
{
	unsigned int unum = num;

	if (num < 0)
	{
		count += _putchar('-');
		unum = -num;
	}
	if (unum > 9)
		count += _print_number(unum / 10, count);
	count += _putchar('0' + unum % 10);
	return (count);
}
/**
 * print_number - prints a number character character
 * @args: number
 * Return: the count of characters
 */
int print_number(va_list args)
{
	int num = va_arg(args, int);

	return _print_number(num, 0);
}
