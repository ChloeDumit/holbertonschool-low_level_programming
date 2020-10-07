#include "holberton.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number
 *Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (n);
	}
	if (n <= 0)
	{
		return (-1);
	}
	return (_calc_sqrt(1, n));
}

/**
 *_calc_sqrt - returns the natural square root of a number
 *@n: number
 *@aux: aux
 *Return: square root
 */
int _calc_sqrt(int aux, int n)
{
	if (aux * aux == n)
	{
		return (aux);
	}
	else if (aux * aux > n)
	{
		return (-1);
	}
	else
	{
		return (_calc_sqrt(aux + 1, n));
	}

}
