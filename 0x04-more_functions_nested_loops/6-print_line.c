#include "holberton.h"
#include <stdio.h>
/*
 *print_line - prints a line in the terminal
 *@n number of times the character should be printed
 *Return nothing
 */
void print_line(int n)
{
char i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
