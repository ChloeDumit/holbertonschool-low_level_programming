#include "holberton.h"
/**
 *re_string - reverse strign
 *@s: s
 *
 */
void rev_string(char *s)
{
int i, letter, rev;
for (i = 0; s[i] != '\0'; i++)
{
}
rev = 0;
for (i = i - 1; rev < i; i--)
{
letter = s[i];
s[i] = s[rev];
s[rev] = letter;
rev++;
}    
}
