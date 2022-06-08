#include <stdio.h>

/**
 * main - print fibonnaci.
 * Return: Always 0.
 */
int main(void)
{
	long f1;
	long f2;
	long sum;
	long sums;
	int n;

	f1 = 1;
	f2 = 2;
	sums = f2;
	for (n = 2; n < 50; n++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		if ((sum < 4000000) && (sum % 2 == 0))
		{
			sums = sums + sum;
		}
	}
	printf("%ld\n", sums);
	return (0);
}



