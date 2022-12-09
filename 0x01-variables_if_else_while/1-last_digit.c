#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d is greater than 5\n", n, l);
	else if (n == 0)
		printf("Last digit of %d is %d is 0\n", n, l);
	else if (n != 0 && n < 6)
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, l);

	return (0);
}