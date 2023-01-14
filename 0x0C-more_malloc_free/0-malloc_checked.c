#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = (void *)malloc(b);

	if (!mem)
		exit(98);
	return (mem);
}
