#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print dog.
 * @d: pointer.
 * Return: none.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
		printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
		if ((*d).age == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("Age: %f\n", (*d).age);
		}
	}
}
