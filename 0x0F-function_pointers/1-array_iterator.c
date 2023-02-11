#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given as a \
 parameter on each element of an array.
 * @array: array to be iterated
 * @size: size of the array
 * @action: function to print element of array
 *
 * Return: Nothing on success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
