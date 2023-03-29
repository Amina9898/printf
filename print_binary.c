#include "main.h"

/**
 * print_binary - prints integeres
 * @arg: input
 * Return: 1
 */

int print_binary(va_list arg)
{
	int len = 0;
	int dv = 2;
	int j;
	int i = va_arg(arg, int);

	if (i < 0)
	{
		len += _putchar('1');
		j = i * -1;
	}
	else
	{
		j = i;
	}
	for (; j / dv > 1;)
	{
		dv *= 2;
	}
	for (; dv != 0;)
	{
		len += _putchar('0' + j / dv);
		j %= dv;
		dv /= 2;
	}
	return (len);
}
