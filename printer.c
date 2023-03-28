#include "main.h"
/**
  * printer - will print using struct
  * @format : input format string
  * @p_function : struct of format and print functions
  * @ap: va_list type
  * Return: will return length of string printed
  */

int printer(const char *format, func_print p_function, va_list ap)
{
	int len = 0;
	int i, j, r;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; p_function[j].format != NULL; j++)
			{
				if (*(p_function[j].format) == format[i])
				{
					r = p_function[j].funp(ap);
					if (r == -1)
						return (-1);
					len += r;
					break;
				}
			}
			if (p_function[j].format == NULL && format[i] != ' ')
			{
				if (format[i] != '\0')
				{
					_putchar(format[i - 1]);
					_putchar(format[i]);
					len += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	return (len);
}
