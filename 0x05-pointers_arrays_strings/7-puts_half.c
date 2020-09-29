#include "holberton.h"
/**
 *puts_half - prints half a string
 *@str: str
 *
 */
void puts_half(char *str)
{
int i, lenght, mid;
for (lenght = 0; str[lenght] != '\0'; lenght++)
{
}
if (lenght % 2 != 0)
{
mid = ((lenght + 1) / 2);
}
else
{
mid = lenght / 2;
}
for (i = mid; i < lenght; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
