#include "holberton.h"
#include <stdio.h>
/**
 *print_rev - print string in reverse
 *@s: s
 *
 */
void print_rev(char *s)
{
int i, letter, rev;
for (i = 0; s[i] != '\0'; i++)
{
}
rev = 0;
for (rev = i - 1; rev >= 0; rev--)
{
letter = s[rev];
_putchar(letter);
}
_putchar('\n');
}
