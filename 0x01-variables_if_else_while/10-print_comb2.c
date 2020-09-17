#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int c;
  for (c = 0; c <= 100; c++)
    {
      putchar (c);     
 if (c != 57)
	{
	  putchar (44);
	  putchar (32);
	}
    }
  putchar ('\n');
  return (0);
}
