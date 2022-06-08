#include <stdio.h>

/**
 * main - print fibonnaci.
 * Return: Always 0.
 */
int main(void)
{
	int f1;
	int f2;
	int sum;
	int n;

	f1 = 1;
	f2 = 2;
	printf("%d, ", f1);
	printf("%d", f2);
	for (n = 2; n <= 50; n ++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf(", %d", sum);
	}
	printf("\n");
}



