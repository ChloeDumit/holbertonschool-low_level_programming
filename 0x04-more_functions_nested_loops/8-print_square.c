#include "holberton.h"
#include <stdio.h>
/**
 *print_square - prints a square in the terminal
 *@size - number of times the character should be printed
 *Return nothing
 */
void print_square(int size)
{
char i;
char j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
