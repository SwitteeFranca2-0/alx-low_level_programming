#include<unistd.h>

/**
 * main - output a string without using the printf or put.
 *
 * Return: Always one.
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

