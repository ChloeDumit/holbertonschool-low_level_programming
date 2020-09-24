#include "holberton.h"
#include <stdio.h>
/**
 *print_triangle -prints a triangle, followed by a new line.
 *@size - size of triangle
 *
 */

void print_triangle(int size)
{
int noOfRows, row, col1, col2, noOfCol;
noOfRows = size;
noOfCol = size;
if (size > 0)
{
for (row = 1; row <= noOfRows; row++)
{
for (col1 = 1; col1 <= noOfCol; col1++)
{
_putchar(32);
}
noOfCol--;
for (col2 = 1; col2 <= row; col2++)
{
_putchar('#');
}
_putchar('\n');
}
}
else {
_putchar('\n');
}
}
