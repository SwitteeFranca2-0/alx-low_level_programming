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
	int n;

	f1 = 1;
	f2 = 2;
	printf("%164ld, ", f1);
	printf("%164ld", f2);
	for (n = 2; n < 98; n++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf(", %ld", sum);
	}
	printf("\n");
	return (0);
}



