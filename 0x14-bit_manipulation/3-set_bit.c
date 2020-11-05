#include <stdio.h>
#include "holberton.h"
/**
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	while (n != '\0')
	{
	*n ^= (-1 ^ *n) & (1UL << index);
	return (1);
	}
	return (-1);
}
