#include "holberton.h"
#include <stdio.h>
/**
 *
 */
char *_strpbrk(char *s, char *accept)
{
		const char *scanp;
		int c, sc;

		while ((c = *s++) != 0) {
			for (scanp = accept; (sc = *scanp++) != 0;)
				if (sc == c)
					return ((char *)(s - 1));
		}
		return (NULL);
}
