#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i, j;
while (i < 9)
{
j = 0;
 while (j < 9)
   {
     _putchar ('0' * j);
     j++;
  }
 _putchar (44);
 i++;
 }
}
