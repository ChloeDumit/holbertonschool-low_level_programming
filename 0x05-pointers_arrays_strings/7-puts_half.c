#include "holberton.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
  int mid, i;  
int lenght = _strlen(str);
char leftHalf[100];
mid = lenght/2;

for(i = 0; i < mid; i++)
 {
  leftHalf[i]= str[i];
 }

 leftHalf[i] = '\0';
 _putchar(leftHalf[i]);
}
