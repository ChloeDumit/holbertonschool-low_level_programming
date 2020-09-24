#include "holberton.h"
#include <stdio.h>
/*
 *print_diagonal - prints a diagonal in the terminal
 *@n number of times the character should be printed
 *Return nothing
 */
void print_diagonal(int n)
{
  char i;
  for (int i=0; i<6; i++)
    {
      for (int j=0; j<i; j++)
	{
	  System.out.print("*");
	}
      System.out.println("");
    }
