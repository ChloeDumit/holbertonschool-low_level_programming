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
int lenght, letter;
while (str[i] != '\0')
{
i++;
}   
lenght = i;
 c = lenght / 2;
for(c = (lenght - c) - 1; c > lenght / 2; c--)
{
letter = str[c];
_putchar(letter);

}
  _putchar('\n');
}
