#include "main.h"

int is_prime(int n, int m);

/**
 * is_prime_number - prime or not?
 * @n: n.
 * Return: function.
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - is prime?
 * @n: n
 * @m: m
 * Return: 1 or 0.
 */

int is_prime(int n, int m)
{
	if (m == (n / 2))
		return (1);
	if (n % m == 0 || n < 0)
		return (0);
	return (is_prime(n, m + 1));
}

