#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers from the argument.
 * @argc: number of arguments.
 * @argv: array of arguments passed in the command line.
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul;

	if (argc != 3)
	{
		print_error();
		exit(98);
	}

	digit_check(argv[1]);
	digit_check(argv[2]);

	num1 = _strtoi(argv[1]);
	num2 = _strtoi(argv[2]);

	mul = _mul(num1, num2);

	print_number(mul);
	__putchar('\n');
	return (0);
}

/**
 * print_error - print "error".
 * Return: none.
 */
void print_error(void)
{
	__putchar('E');
	__putchar('r');
	__putchar('r');
	__putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * digit_check - check to makes sure only digts are in passed arguments..
 * @s: argument.
 * Return: none.
 */
void digit_check(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (!(s[m] >= 48 && s[m] <= 57))
		{
			print_error();
			exit(98);
		}
	}
}

/**
 * _strtoi - convert string to integre.
 * @s: string.
 * Return: integer.
 */
unsigned int _strtoi(char *s)
{
	int k;
	unsigned int m;

	m = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] >= 48 && s[k] <= 57)
		{
			m = m * 10 + s[k] - '0';
		}
	}
	return (m);
}

/**
 * _mul - multiply arguments.
 * @a: argument.
 * @b: argument.
 * Return: product of arguments.
 */
unsigned int _mul(unsigned int a, unsigned int b)
{
	unsigned int m;

	m = a * b;
	return (m);
}

/**
 * print_number - print number.
 * @n: argument.
 * Return: none.
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	num /= 10;
	if (num != 0)
		print_number(num);
	_putchar(n % 10 + '0');
}
