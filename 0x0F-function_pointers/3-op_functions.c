#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - operation add.
 * @a: number..
 * @b: number.
 * Return: calculated value.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operation substraction.
 * @a: number..
 * @b: number.
 * Return: calculated value.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operation multiply.
 * @a: number..
 * @b: number.
 * Return: calculated value.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - operation divide.
 * @a: number..
 * @b: number.
 * Return: calculated value.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - operation modulos..
 * @a: number..
 * @b: number.
 * Return: calculated value.
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
