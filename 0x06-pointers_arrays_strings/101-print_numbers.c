#include "main.h"
#include <stdio.h>

int main(void)
{
	print_number(98);
	putchar('\n');
	print_number(402);
	putchar('\n');
	print_number(1024);
	putchar('\n');
	print_number(-98);
	putchar('\n');
	return (0);
}
void print_number(int n)
{
	int num;
	
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	num = n;
	num = num / 10;

	if (num != 0)
		print_number(num);
	putchar(n % 10 + '0');
}

