#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory area for data to be copied into.
 * @src: memory area for data to be copied from.
 * @n: size of arrray
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, max = n;

	for ( ; i < max; i++)
		dest[i] = src[i];
	return (dest);
}
