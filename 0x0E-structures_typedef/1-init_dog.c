#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog variable
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dogs name
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
