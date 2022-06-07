#include <stdio.h>
#include "main.h"

/**
 * main - call the add function.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

/**
 * add - adds two valiues
 * @a: a variable.
 * @b: a variable.
 * Return: returns the value sum.
 */
int add(int a, int b)
{
	return (a + b);
}
