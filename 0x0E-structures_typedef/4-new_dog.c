#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}
/**
 * _strcpy - function to copy string from source to destination
 *@dest: pointer to destinatioin of string to be copied
 *@src: pointer to source of string to be copied
 * Return: return the value at dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ndog->name == NULL)
	{
		return (NULL);
	}
	_strcpy(ndog->name, name);
	ndog->age = age;
	if (owner == NULL)
	{
		free(ndog->owner);
			free(ndog);
			return(NULL);
	}
ndog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ndog->owner == NULL)
	{
		return (NULL);
	}
	_strcpy(ndog->owner, owner);
	return (ndog);
}
