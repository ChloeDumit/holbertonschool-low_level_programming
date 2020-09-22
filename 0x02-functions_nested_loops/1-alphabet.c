#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet -print the character
 * Return: nothing
 */
void print_alphabet(void)
{
char c;
for (c = 97; c <= 122; c++)
_putchar(c);
_putchar ('\n');
}
