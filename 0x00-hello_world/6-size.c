#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of variable a : %ld byte(s)\n", sizeof(char));
printf("Size of int data type : %ld byte(s)\n", sizeof(int));
printf("Size of char data type : %ld byte(s)\n", sizeof(long int));
printf("Size of float data type : %ld byte(s)\n", sizeof(long long int));
printf("Size of double data type : %ld byte(s)\n", sizeof(float));
return (0);
}
