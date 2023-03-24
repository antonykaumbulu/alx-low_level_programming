#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - finds right operator
 * @s: variable for the operation
 *
 * Return: function pointer to function
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

	while (ops[i].op != NULL)
	{
		if ((*ops[i].op == *s) && (*(s + 1) == '\0'))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
