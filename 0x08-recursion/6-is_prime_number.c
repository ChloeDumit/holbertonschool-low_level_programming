#include "holberton.h"
/**
 *is_prime_number - return 1 if its prime
 *@n: number
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (isPrime(n, 2));
}
/**
 *isPrime - return 1 if its prime
 *@n: number
 *@i: i
 *Return: 1 or 0
 */

int isPrime(int n, int i)
{
if (n == i)
	return (1);
else if (n % i == 0)
	return (0);
else
	return (isPrime(n, i + 1));
}
