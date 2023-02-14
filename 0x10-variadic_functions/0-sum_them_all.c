#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: argument length
 *
 * Return: sum of parameter list
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
