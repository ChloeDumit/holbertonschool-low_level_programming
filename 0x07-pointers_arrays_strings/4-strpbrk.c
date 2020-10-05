#include "holberton.h"
#include <stdio.h>
/**
 *
 */
char *_strpbrk(char *s, char *accept)
{
do
{
	if (*s == *accept)

		return(s);

}
while (*s++);
{

return(NULL);
}
