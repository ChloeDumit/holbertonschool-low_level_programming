#include "holberton.h"
#include <stdio.h>
/**
 *main - main
 *@argc: argc
 *@argv: argv
 *Return: 0
 **/
int main(int argc, char *argv[])
{
int count;
for (count = 1; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
