#include "holberton.h"
#include <stdio.h>
/**
 * print_most_numbers - prints numbers from 0 to 9
 *@ch - number
 * Return: Nothing
 */
void print_most_numbers(void)
{
char ch;
for (ch = 48; ch <= 57; ch++)
{
if (ch == 50 || ch == 52)
continue;
putchar(ch);
}
putchar('\n');
}
