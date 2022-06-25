#include <unistd.h>

/**
 * _putchar - writes char.
 * @c: arg.
 * Return: on success, 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
