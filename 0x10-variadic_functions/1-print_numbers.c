#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - prints numbers
 *@separator: separador
 *@n: number
 *Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator)
	{
		printf("%s%i", separator, va_arg(list, int));
	}
	printf("%d", va_arg(list, int));
	}
}
			va_end(list);
			printf("\n");
}
