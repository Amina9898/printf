#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...);
/**
  * struct pfunction - struct of functions pointers
  * 
  * @format: input specifier
  * @funp: function pointer
  */
typedef struct pfunction
{
	char *format;
	int (*funp)(va_list);
} func_print;
#endif
