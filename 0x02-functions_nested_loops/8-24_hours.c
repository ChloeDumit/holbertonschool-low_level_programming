#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
  int n1;
  int n2;
  for (n1 = 0; n1 < 24; n1++){
    for (n2 = 0; n2 < 60; n2++){
      _putchar (n1 % 10 + '0');
      _putchar (n1 % 10 + '0');
      _putchar (':');
      _putchar (n2 % 10 + '0');
      _putchar (n2 % 10 + '0');
    }
  }
}
