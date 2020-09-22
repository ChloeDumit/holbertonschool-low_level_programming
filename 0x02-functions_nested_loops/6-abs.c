#include "holberton.h"
#include <stdio.h>
/**
 * _abs - check positive, negative or zero
 * @n: the number to be checked
 *
 * Return: return absolute value
 */
int _abs(int x)
{
if (x < 0)
{
return ((-x));
}
else
{
return ((x));
}
}
