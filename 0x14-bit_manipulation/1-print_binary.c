#include <stdio.h>
#include "holberton.h"
/**
 *print_binary - prints binary representation of a number
 *@n: number
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
	char bits;

	bits = n & 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else if  (n == 1)
	{
		_putchar('1');
	}
	else
	{
		print_binary(n >> 1);
		_putchar(bits + '0');
	}
}
