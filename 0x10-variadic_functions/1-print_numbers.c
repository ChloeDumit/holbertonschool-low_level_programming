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
	unsigned i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
	if (separator == NULL)
	{
		printf("%d ", va_arg(list, int));
	}
	printf("%d", va_arg(list, int));
	if(i < (n - 1))
	{
	printf("%s", separator);
	}
}
			va_end(list);
			printf("\n");
}
