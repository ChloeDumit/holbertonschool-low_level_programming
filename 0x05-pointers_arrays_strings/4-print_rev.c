#include "holberton.h"
#include <stdio.h>
/**
 *print_rev - print string in reverse
 *@s: s
 *
 */
void print_rev(char *s)
{
int i, j, k;
char rev[150];
for (i = 0; s[i] != '\0'; i++)
{
k = i;
}
for (j = 0; j <= i - 1; j++)
{
rev[j] = s[k];
k--;
}
printf("%s\n", rev);
}
