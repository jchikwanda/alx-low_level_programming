#include "dog.h"
#include <stdlib.h>

/**
 * stringLength - Calculates the length of a string
 * @str: Pointer to the string
 *
 * Return: The length of the string
 */
int stringLength(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * my_strcpy - copies the string pointed to by src, including the
 *             terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the destination string dest
 */
void my_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
}


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

	dog->name = malloc(sizeof(char) * stringLength(name) + 1);

	if (!dog->name)
	{
		free(dog->name);
		free(dog);

		return (NULL);
	}

	dog->owner =  malloc(sizeof(char) * stringLength(owner) + 1);

	if (!dog->owner)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);

		return (NULL);
	}

	my_strcpy(dog->name, name);
	dog->age = age;
	my_strcpy(dog->owner, owner);

	return (dog);
}
