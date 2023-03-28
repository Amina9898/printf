#include "main.h"

/**
  * _printf - will print to screen
  * @format : format specifier
  * Return: number of chars printed
  */

int _printf(const char *format, ...)
{
	func_print p_function[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_integer},
		{"r", reverse_print},
		{NULL, NULL}};

	int len;
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	len = printer(format, p_function, ap);
	va_end(ap);

	return (len);
}
