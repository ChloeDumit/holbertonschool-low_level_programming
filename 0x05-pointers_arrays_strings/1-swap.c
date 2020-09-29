#include "holberton.h"
/**
 *swap_int - swap integer
 *@a: a
 *@b: b
 *
 *
 */
void swap_int(int *a, int *b)
{   
int temp = *a;
*a = *b;
*b = temp;
}
