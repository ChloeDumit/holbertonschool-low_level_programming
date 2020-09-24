#include "holberton.h"
/**
 * more_numbers - checks for checks for a digit (0 through 9). 
 *
 *Return: Always 0.
 */
void more_numbers(void)
{
int ch;
int i;
for (i = 0; i < 10; i++)
{
for (ch = 0; ch < 15; ch++)
{
if (ch / 10 != 0)
{
_putchar((ch / 10) + '0');
}
_putchar((ch % 10) + '0');
}
_putchar('\n');
}
}
