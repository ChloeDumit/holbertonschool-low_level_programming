#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
  int h1, h2, m1, m2;
  int tope;
  tope = 9;
  for (h1 = 0; h1 <= 2; h1++) 
    {
      for (h2 = 0; h2 <= tope; h2++)
	{
	  for (m1 = 0; m1 <= 5; m1++)
	    {
	      for (m2 = 0; m2 <= 9; m2++)
		{
		  if (h1==2) {
		    tope = 3;
		  }
		  _putchar('0' + h1);
		  _putchar('0' + h2);
		  _putchar(58);		  
_putchar('0' + m1);
		  _putchar('0' + m2);
		  _putchar('\n');
		}
}
}
}
}
