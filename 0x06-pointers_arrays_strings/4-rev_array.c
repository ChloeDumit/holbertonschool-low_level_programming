#include "holberton.h"
/**
 * reverse_array - reverse an array of integers
 *@a: a
 *@n: n
 *
 **/
void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	i = 0;
	temp = 0;

	for (i = 0; i < n; i++)
	{
	}
	j = i - 1;
	i = 0;
		while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
