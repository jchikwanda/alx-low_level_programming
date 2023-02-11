#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owners name
 *
 * Return: Instance of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = (dog_t *) malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
