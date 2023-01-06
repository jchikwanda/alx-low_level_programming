#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: string to be counted
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0, i = 0, j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				counter++;
				break;
			}
			if (accept[i + 1] == '\0')
				return (counter);
		}
		j++;
	}
	return (counter);
}
