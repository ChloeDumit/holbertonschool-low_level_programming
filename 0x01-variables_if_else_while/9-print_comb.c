#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char C = ',';
char s = '\0';
for (c = '0'; c <= '9'; c++)
  if (c < 10){
putchar (c);
putchar (C);
putchar (s);
}
putchar ('\n');
return (0);
}
