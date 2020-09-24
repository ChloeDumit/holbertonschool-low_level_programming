#include "holberton.h"
#include <stdio.h>
/*
 *print_diagonal - prints a diagonal in the terminal
 *@n number of times the character should be printed
 *Return nothing
 */
void print_diagonal(int n)
{
char i;
for (i = 0; i < n; i++)
{
_putchar(' ');
_putchar(92);
 _putchar('\n');
}
_putchar('\n');
}
