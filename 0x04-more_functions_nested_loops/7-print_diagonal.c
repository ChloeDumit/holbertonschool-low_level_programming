#include "holberton.h"
#include <stdio.h>
/**
 *print_diagonal - draws diagonal line
 * @n: number of is requested by main.c
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
