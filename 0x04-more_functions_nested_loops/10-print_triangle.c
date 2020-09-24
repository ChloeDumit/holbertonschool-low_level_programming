#include "holberton.h"
#include <stdio.h>
/**
 *print_triangle -prints a triangle, followed by a new line.
 *@size - size of triangle
 *Return: Always o.
 */

void print_triangle(int size)
{
int row, col;
if (size > 0)
{
for (row = 1; row <= size; row++)
  {
    for (col = 1; col <= size; col++)
      {
	if (col <= size - row)
	  _putchar(' ');
	else 
	  _putchar('#');
      }
    _putchar('\n');
  } 
 }
 else 
   {
   
    _putchar('\n');
   }
}
