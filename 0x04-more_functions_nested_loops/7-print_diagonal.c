#include "holberton.h"
#include <stdio.h>
/*
 *print_diagonal - prints a diagonal in the terminal
 *@n number of times the character should be printed
 *Return nothing
 */
void print_diagonal(int n)
{
int m, i;
m = 0;
if (n > 0)
{
while (m != n)
{
for (i = 0; i < m; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
m++;
}
}
else
{
_putchar('\n');
}
}
