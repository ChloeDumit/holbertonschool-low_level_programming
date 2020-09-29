#include "holberton.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
  
  int c;
  int i = 0;

  while (str[i] != '\0')
    {
      i++;
    }   

  for(c = 0; c < i; c++)
    {
      if ( i % i != 0)
	{
	  _putchar(str[i]);
	}
      else {
int n = (i - 1) / 2;
	  _putchar(n);
      }
    } 
}
