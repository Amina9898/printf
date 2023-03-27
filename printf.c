#include "main.h"

/**
  * _printf - will print to screen
  * @format : format specifier
  * Return: number of chars printed
  */

int _printf(const char *format, ...)
{
	func_print p_function[] = {{"c", print_char}, {"s", print_string}
		, {"%", print_percent}, {"d", print_integer}, {"i", print_integer}
		, {NULL, NULL}};
	int i = 0, len = 0, j;

	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		if (format == NULL)
			return (-1);
		j = 0;
		if (format[i] == '%')
		{
			i++;
			j = 0;

			while (p_function[j].format != NULL)
			{
				if (*(p_function[j].format) == format[i])
				{
					len += p_function[j].funp(ap);
					i++;
				}
				j++;
			}
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(ap);
	return (len);
}
