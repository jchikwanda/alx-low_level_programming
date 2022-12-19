#include "main.h"

/**
 * puts_half - prints second half of a given string
 * @str: string to be printed
 *
 * Return: nothing on success
 */
void puts_half(char *str)
{
	int count = 0, i;

	while (*str)
	{
		count++;
		str++;
	}

	for (i = 0; i < count; i++)
		str--;

	for (i = (count) / 2; i < count; i++)
		_putchar(str[i]);

	_putchar('\n');
}
