#include "holberton.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
  int lenght, mid;
  for (lenght = 0; str[lenght] != '\0'; lenght++)
    {
    }    
  if (lenght % 2 == 0)
	{
	  mid = (lenght + 1) / 2;
	}
      else
	{
	  mid = lenght / 2;
	}
    
      for ( ; lenght - mid >= 1; mid++)
	{
	  _putchar(str[mid]);
	}
      _putchar('\n');
}
