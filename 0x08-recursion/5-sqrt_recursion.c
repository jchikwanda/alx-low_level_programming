/**
 * number - helps find the square root of natural squareroot numbers.
 * @n: natural number starting from 1
 * @root: sqaureroot number to be found.
 *
 * Return: square root of answer.
 * If root is not natural sqaure root returns -1
 * If root less than 0 returns -1
 */
int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number for which natural square root should be found.
 *
 * Return: natural square root n.
 * If n does not have a natural square root, the function should return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
