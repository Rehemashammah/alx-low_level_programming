#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function to create a new dog
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 *
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = strlen(name);
		owner_len = strlen(owner);
		new_Dog = malloc(sizeof(dog_t));

		if (new_Dog == NULL)
		{
			return (NULL);
		}
		new_Dog->name = malloc(sizeof(char) * name_len + 1);

		if (new_Dog->name == NULL)
		{
			free(new_Dog);
			return (NULL);
		}
		new_Dog->owner = malloc(sizeof(char) * owner_len + 1);

		if (new_Dog->owner == NULL)
		{
			free(new_Dog->name);
			free(new_Dog);
			return (NULL);
		}
		new_Dog->name = name;
		new_Dog->owner = owner;
		new_Dog->age = age;
	}
	return (new_Dog);
}
