#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner:owner
 * Return: name and owner and NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	if (name == NULL)
		return (NULL);

	if (owner == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	new_dog->age = age;

	new_dog->owner = strdup(owner);

	return (new_dog);
}
