#include "main.h"

/**
 * reverse_print - prints string in reverse
 * @arg: va_list
 * Return: len
 */

int reverse_print(va_list arg)
{
	char *s;
	int i, len = 0;

	s = va_arg(arg, char *);
	if (s == NULL)
		return (-1);
	for (i = 0; s[i] != '\0'; i++)

	for (i = (i - 1); i >= 0; i--)
	{
		_putchar(s[i]);
		len++;
	}
	return (len);
}
