#include "holberton.h"
/**
 *puts2 - prints every other character of a string
 *@str: pointer to str
 *
 **/
void puts2(char *str)
{
int i;
for (i = 0; *(str + i) != '\0'; i = i + 2)
{
_putchar(*(str + i));
}
_putchar('\n');
}
