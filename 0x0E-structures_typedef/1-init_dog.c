#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise dog.
 * @d: pointer.
 * @name: name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: none.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
