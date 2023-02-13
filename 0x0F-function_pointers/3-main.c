#include "3-calc.h"

/**
 * main - Main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func)
		printf("%d\n", func(a, b));
	else
	{
		puts("Error");
		exit(99);
	}

	return (0);
}
