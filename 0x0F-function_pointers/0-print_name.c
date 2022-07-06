#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name.
 * @name: name.
 * @f: function pointer.
 * Return: none.
 */
void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
