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
for (ch = '0'; ch <= '9'; ch++)
{
if (ch == '2' || ch == '4')
continue;
putchar(ch);
}
putchar('\n');
}
