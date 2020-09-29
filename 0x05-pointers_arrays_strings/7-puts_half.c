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
  int lenght, half1, half2;
  while (str[i] != '\0')
    {
      i++;
    }   
  lenght = i;
  half1 = lenght / 2;
  half2 = lenght - half1;
  for(c = half1; c < half2 - 1; c++)
    {
      _putchar(str[c]);

    }
  _putchar('\n');
}
