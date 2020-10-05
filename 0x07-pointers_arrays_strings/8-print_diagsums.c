#include "holberton.h"
#include <stdio.h>
/**
*
*
**/
void print_diagsums(int *a, int size)
{
        int principal = 0, secondary = 0;

       for (int i = 0; i < size; i++)
{
	for (int j = 0; j < size; j++)
{
	if (i == j)
				principal = a[i][j];
	if ((i + j) == (size - 1))
				secondary = a[i][j];
}
}
       printf("%d, %d", principal, secondary);
}
