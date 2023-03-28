#include "main.h"

/**
 * print_decimal - prints integeres
 * @arg: input
 * Return: 1
 */

int print_decimal(va_list arg)
{
	int len = 0;
	int dv = 1;
	int j;
	int i = va_arg(arg, int);

	if (i < 0)
	{
		len += _putchar('-');
		j = i * -1;
	}
	else
	{
		j = i;
	}
	for (; j / dv > 9;)
	{
		dv *= 10;
	}
	for (; dv != 0;)
	{
		len += _putchar('0' + (j / dv));
		j %= dv;
		dv /= 10;
	}
	return (len);
}
