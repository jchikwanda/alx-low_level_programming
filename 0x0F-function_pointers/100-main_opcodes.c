#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of a memory block in hexadecimal format
 * @p: pointer to the memory block
 * @size: size of the memory block
 */
void print_opcodes(unsigned char *p, int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%02x ", p[i]);
	printf("\n");
}

/**
 * main - entry point of the program
 * @argc: number of command line arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	unsigned char *p = (unsigned char *)main;
	int size;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		puts("Error");
		exit(2);
	}

	print_opcodes(p, size);

	return (0);
}
