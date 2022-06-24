#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc.
 * @argc: argc.
 * @argv: array.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int m, n, c, d, a[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) > 0)
	{
		n = 0;
		while (a[n])
		{
			if (atoi(argv[1]) >= a[n])
			{
				break;
			}
			n++;
		}
		m = a[n];
		d = atoi(argv[1]);
		c = d / m;
		while (d % m)
		{	
			n = 0;
			d = d % m;
			while (a[n])
			{
				if (d >= a[n])
				{
					m = a[n];
					break;
				}
				n++;
			}
			c += d / m;
		}
		printf("%d\n", c);
	}
	else 
	{
		printf("0\n");
	}
		return (0);					
}
