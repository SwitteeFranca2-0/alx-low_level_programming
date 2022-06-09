#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - orint prime.
 * Return: 0.
 */
int main(void)
{
	long int n;
	long int max;
	long int num;
	double root;

	n = 612852475143;
	max = 0;
	root = sqrt(n);
	for (num = 1; num <= root ; n++)
	{
		if (n % num == 0)
		{
			if (num > max)
				max = num;
		}
	}
	printf("%ld\n", max);
}


