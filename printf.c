#include "main.h"
/**
 * _printf - produce ouput according to format
 * @format: character string format
 * @...: arguments
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, num = 0;

	if (!format)
		return (-1);
	va_start(args, format);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	while (format && format[i] != '\0')
	{
		if ('%' == format[i])
		{
			i++;
			if (format[i] == '%')
				num += _putchar(format[i]);
			else
				num += type_option(format[i], args);
			i++;
		}
		else
		{
			num += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (num);
}
