#include "main.h"

/**
 * print_percent - prints %
 * @arg: input
 * Return: 1
 */

int print_percent(__attribute__((unused))va_list arg)
{
	_putchar('%');
	return (1);
}

/**
 * print_char - function prints char
 * @arg: argument
 * Return: 1
 */

int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	write(1, &c, 1);
	return (1);

}


/**
 * print_string - function prints string
 * @arg: argument
 * Return: write
 */

int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";

	return (write(1, s, strlen(s)));
}

/**
 * _putchar - function will print char
 * @c: input
 * Return: write
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
