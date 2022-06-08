#include <stdio.h>

/**
 * main - print fibonnaci.
 * Return: Always 0.
 */
int main(void)
{
	long double f1;
	long double f2;
	long double sum;
	int n;

	f1 = 1;
	f2 = 2;
	printf("%0.0Lf, ", f1);
	printf("%0.0Lf", f2);
	for (n = 2; n < 98; n++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf(", %0.0Lf", sum);
	}
	printf("\n");
	return (0);
}



