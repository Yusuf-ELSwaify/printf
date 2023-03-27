#include "main.h"
#include <stdarg.h>
/**
 * print_char - print a character
 * @args: char
 * Return: ascii code of char
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - prints a string
 * @args: string
 * Return: the sum of character
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";
	while (*str != '\0')
		count += _putchar(*str++);
	return (count);
}
/**
 * _print_number - prints a number
 * @num: number
 * @count: to sum the character
 * Return: the sum of characters
 */
int _print_number(int num, int count)
{
	unsigned int unum = num;
	int neg_count = 0;

	if (num < 0)
	{
		neg_count += _putchar('-');
		unum = -num;
	}
	if (unum > 9)
		count += _print_number(unum / 10, count);
	count += _putchar('0' + unum % 10);
	return (count + neg_count);
}
/**
 * print_number - prints a number
 * @args: number
 * Return: the sum of characters
 */
int print_number(va_list args)
{
	int num = va_arg(args, int);

	return (_print_number(num, 0));
}
/**
 * print_int_b - prints a number as binary
 * @args: number
 * Return: the sum of characters
 */
int print_int_b(va_list args)
{
	int num = va_arg(args, int);
	int i = 31, count = 0;
	int flag_0 = 0;

	while (i >= 0)
	{
		int bin_num = (num >> i) & 1;

		i--;
		if (!flag_0 && bin_num == 0)
			continue;
		else
			flag_0 = 1;
		count += _putchar('0' + bin_num);
	}
	if (!flag_0)
		count += _putchar('0');
	return (count);
}
