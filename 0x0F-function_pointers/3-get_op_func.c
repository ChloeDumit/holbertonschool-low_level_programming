#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
};
int i;
i = 0;

while (ops[i].op != NULL)
{
	if(strcmp(ops[i].op, s) == 0)
	{
		return (ops[i].f);
			}
	i++;

}
printf("Error\n");
exit(99);
}
