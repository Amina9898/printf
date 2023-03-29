#include "main.h"
/**
  * print_rot13 - will print encrypted char
  * @arg : va_list input
  * Return: will return length of string printed
  */

int print_rot13(va_list arg)
{
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwyxzabcdefghijklm";
	int i, j, len = 0;

	char *s = va_arg(arg, char *);

	if (s == NULL)
		return (-1);

	for (i = 0; s[i] != '\0', i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
			{
				_putchar(s2[j]);
				len++;
			}
		}
	}
	return (len);
}
