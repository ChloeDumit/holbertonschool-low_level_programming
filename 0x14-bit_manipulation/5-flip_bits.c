#include <stdio.h>
#include "holberton.h"
/**
 *flip_bits - flip bits
 *@n: n
 *@m: m
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	while (n != 0 && m != 0)
	{
	return (count(n ^ m));
	}
	return (0);
}
/**
 *count - count
 *@a: count
 *Return: counter
 */
unsigned int count(unsigned int a)
{
	int counter = 0;

	while (a != 0)
	{
		counter++;
		a &= (a - 1);
	}
	return (counter);
}
