#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function to print a struct dog
 * struct dog - data type for structures
 * @d: pointer to struct dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
