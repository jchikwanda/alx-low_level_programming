#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string whose length is to be calculated
 *
 * Return: length of @str
 */
unsigned int _strlen(char *str)
{
	unsigned int count = 0;

	for ( ; str[count] != '\0'; count++)
		;
	return (count);
}

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
	unsigned int s1_len = _strlen(s1), s2_len = _strlen(s2), count = 0;
	char *text;

	if (!s1 && !s2)
		return ("");
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (s2_len < n)
		s2_len = n;

	text = malloc((s1_len + s2_len) + 1);

	if (!text)
		return (NULL);

	while (*s1)
	{
		text[count] = *s1;
		s1++;
		count++;
	}

	while (*s2 != s2[s2_len - 1])
	{
		text[count] = *s2;
		s2++;
		count++;
	}

	text[count] = '\0';

	return (text);
}
