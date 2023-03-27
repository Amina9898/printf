#include "main.h"

/**
 * print_integer - prints integeres
 * @arg: input
 * Return: 1
 */

int print_integer(va_list arg)
{
	int len = 0;
	int dv = 1;
	int i = va_arg(arg, int);

	if (i < 0)
	{
		len += _putchar('-');
		i = i * -1;
	}
	for (; i / dv > 9;)
	{
		dv *= 10;
	}
	for (; dv != 0;)
	{	len += _putchar('0' + i / dv);
		i %= dv;
		dv /= 10;
	}
	return (len);
}
