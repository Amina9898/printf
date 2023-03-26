#include "main.h"

/**
  * printf - will print to screen
  * @format : format specifier
  * Return: number of chars printed
  */

int printf(const char *format, ...)
{
	func_print p_function[] = {{"c", print_char}, {"s", print_string}
		, {NULL, NULL}};
	int i = 0, len = 0, int j;

	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				print_char(format[i]);
				i++;
				len++;
			}
			else
			{
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
		}
		print_char(format[i]);
		len++;
		i++;
	}
	va_end(ap);
	return (len);
}
