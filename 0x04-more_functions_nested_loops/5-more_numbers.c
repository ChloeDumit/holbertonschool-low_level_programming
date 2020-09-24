#include "holberton.h"
/**
 * print_alphabet_x10 - print the character from a to z 10 times
 */
void more_numbers(void)
{
  char ch, c;
int i;
 int dec = ( i / 10);
 int uni = ( i % 10);
for (i = 0; i <= 14; i++)
{
  if (i > 9)
    {
      _putchar(dec);
      _putchar(uni);
    }
