#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of a and b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substractsb from a.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: a minus b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication of a and b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: result of a multiplying b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of a and b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: the division of a by b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returnas remainder of a divided by b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: remainder of a divided by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
