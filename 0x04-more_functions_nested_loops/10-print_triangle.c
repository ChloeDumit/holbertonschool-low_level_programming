#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
 */

void print_triangle(int size)
{
int i, j;
 if (size > 0)
   {
for (i = 0; i < size; ++i)
  {
    for (j = 0; j < i; ++j)
      {
	_putchar(35);
      }
  _putchar(32);
  _putchar('\n');
  }
   }
 else {
   _putchar('\n');
 }
}
