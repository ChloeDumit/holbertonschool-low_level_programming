#include "holberton.h"
#include <stdio.h>
/**
 *print_array - print n elements of array
 *@a: pointer to a
 *@n: lenght of array
 *
 **/
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n - 1; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
