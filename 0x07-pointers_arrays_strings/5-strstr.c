#include "holberton.h"
/**
 *_strstr - locates a substring
 *@haystack: haystack
 *@needle: needle
 *Return: pointer
 **/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	i = 0;

	while (haystack[i])
	{
	while (haystack[i] && needle[i] && haystack[i] == needle[i])
		{
			i++;
		}

		if (!needle[i])
		{
			return (haystack);
		}

		haystack++;
	}
	return ('\0');
}
