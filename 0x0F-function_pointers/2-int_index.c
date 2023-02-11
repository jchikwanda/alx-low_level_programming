/**
 * int_index - Finds the index of the first element in the array
 * @array: pointer to an array of integers
 * @size: size of the array
 * @cmp: pointer to a comparison function that takes an integer as an argument
 *  and returns an integer
 *
 * Return: the index of the first element in the array for which cmp() does not
 *  return 0, or -1 if no such element is found or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (-1);

	for ( ; index < size; index++)
	{
		if ((*cmp)(array[index]))
			return (index);
	}

	return (-1);
}
