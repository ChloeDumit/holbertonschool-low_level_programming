#include "holberton.h"
#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers
 *
 * Return Always 0.
 */
int main(void)
{
long int i, t1 = 1, t2 = 2, nextTerm;
for (i = 0; i < 50; i++)
{
if (i >= 49)
{
printf("%ld\n", t1);
}
else
{
printf("%ld, ", t1);
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
}
}
return (0);
}
