#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - new dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 * Return: dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	if (name != NULL && owner != NULL)
	{
		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);
		len_name = _strlen(name) + 1;
		len_owner = _strlen(owner) + 1;

		(*dog).name = malloc(sizeof(char) * len_name);
		if ((*dog).name == NULL)
		{
			free(dog);
			return (NULL);
		}
		(*dog).owner = malloc(sizeof(char) * len_owner);
		if ((*dog).name == NULL)
		{
			free(dog);
			return (NULL);
		}

		(*dog).name = _strcpy((*dog).name, name);
		(*dog).owner = _strcpy((*dog).owner, owner);
		(*dog).age = age;
	}
	return (dog);
}

/**
 * _strlen - string length.
 * @s: string
 * Return: length.
 */

int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	return (i);

}

/**
 * _strcpy - string copy.
 *  @dest: destination.
 *  @src: source.
 *  Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
