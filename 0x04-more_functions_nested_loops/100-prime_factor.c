#include <stdio.h>
#include <math.h>

/**
 * main - orint prime.
 * Return: 0.
 */
int main(void)
{
	int m = 0;
	long long int n, y, x;
	long int max = 0;
	long int hum = 0, num;
	double root;

	n = 612852475143;
	for (y = 2; y <= n / 4; y++)
	{
		num = 2;
		if (n % y == 0)
		{
			{
				if (y % num == 0)
					break;
				num++;
			}
		}

		if (num <= (y / 2) - 1)
			continue;
		hum = y;
		if (hum > max)
			max = hum;
	}
	
	printf("%ld", max);
	
	return (0);
}


