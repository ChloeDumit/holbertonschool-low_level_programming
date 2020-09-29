#include "holberton.h"
/**
 *swap_int - swap integer
 *@a: swapping a for b
 *@b: swapping b for a
 **/
void swap_int(int *a, int *b)
{   
int temp = *a;
*a = *b;
*b = temp;
}
