#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - main
 *@argc; argc
 *@argv: argv
 *return: 0
 **/
int main (int argc, __attribute__((unused)) char *argv[])
{
  int i, sum; 
 if (argc < 1)
    {
      printf("0\n");
    }
  for (i = 0; argv[i] != '\0'; i++)
    {
      sum += atoi(argv[i]);
    }
  printf("%d\n", sum);
  return (0);
}
