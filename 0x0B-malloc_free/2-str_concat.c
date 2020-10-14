#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat- concatenates two strings
 *@s1: s1
 *@s2: s2
 *Return: s
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *s3;
	int k;
	int l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;
	s3 = malloc((i + j) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s3[k] = s1[k];
	for (l = 0; l < j; l++)
		s3[k + l] = s2[l];
	return (s3);
}
