#include <stdio.h>
#include <stdlib.h>
/**
 *main - main
 *@argc: argc
 *@argv: argv
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int saldo;
	int monedas = 0;
	if (argc != 2)
	{
 printf("Error\n");
 return(1);
	}
	saldo = atoi(argv[1]);

	while (saldo >= 25)
	{
		saldo = saldo - 25;
		monedas++;
	}
	while (saldo >= 10)
	{
		saldo = saldo - 10;
		monedas++;
	}
	while (saldo >= 5)
	{
		saldo = saldo - 5;
		monedas++;
	}
	while (saldo >= 2)
	{
		saldo = saldo - 2;
		monedas++;
	}
	if (saldo == 1)
	{
		monedas++;
	}
	printf("%i\n", monedas);
	return(0);
}
