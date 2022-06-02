#include <stdio.h>

/**
 * main - print size of variable.
 *
 * Return: Always 0.
 */
int main(void)
{
	char size_char;
	int size_int;
	long int size_long_int;
	long long int size_longx2_int;
	float size_float;

	printf("Size of a char: %ld byte(s)\n", sizeof(size_char));
	printf("Size of an int: %ld byte(s)\n", sizeof(size_int));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(size_long_int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(size_longx2_int));
	printf("Size of a float: %ld byte(s)\n", sizeof(size_float));

	return (0);
}
