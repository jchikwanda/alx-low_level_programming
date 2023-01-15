#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to use
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*str);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
