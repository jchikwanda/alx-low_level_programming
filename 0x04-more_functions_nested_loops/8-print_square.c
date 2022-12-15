#include "main.h"

/**
 * print_square - prints a sqaure.
 * @size: square size
 *
 * Return: nothing on success
 */
void print_square(int size)
{
	int count = 0, start;

        for (start = 0; start < size; start++)
	{
		while (count < size)
		{
			_putchar('#');
			count++;
		}
		count = 0;
		_putchar('\n');
	}
}
