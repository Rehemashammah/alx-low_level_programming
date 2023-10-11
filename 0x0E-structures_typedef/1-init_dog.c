#include "dog.h"

/**
 * init_dog - function to initialize a struct variable
 * @struct dog - data type
 * @d: pointer to a struct dog
 * @name: Structure member 1
 * @age: Structure member 2
 * @owner: Structure member 3
 *
 * Return: Always 0 on success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
