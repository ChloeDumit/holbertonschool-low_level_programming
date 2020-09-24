#include "holberton.h"
#include <stdio.h>
/*
 *print_diagonal - prints a diagonal in the terminal
 *@n number of times the character should be printed
 *Return nothing
 */
void print_diagonal(int n)
{
  char espacio = 32;
  int i;
  if (n > 0)
    {
      for (i = 0; i <= n; i++)
	{
	  _putchar(espacio * i);
	  _putchar(92);
	  _putchar('\n');
	}
    }
  else 
    {
      _putchar('\n');
    }
}
