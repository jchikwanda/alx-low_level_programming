#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: dog struct
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		char *name = d->name ? d->name : "(nil)";
		char *owner = d->owner ? d->owner : "(nil)";
		float age = d->age;

		printf("Name: %s\nAge: %.1f\nOwner: %s\n", name,  age, owner);
	}
}
