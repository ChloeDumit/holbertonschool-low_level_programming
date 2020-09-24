#include "holberton.h"
/**
 * print_square -  checks for checks for a digit (0 through 9).
 * @size: size -  Variable
 * Return: Always 0.
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
