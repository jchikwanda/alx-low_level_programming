#include "3-calc.h"

/**
 * my_strcmp - compares two strings and returns their difference
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer representing the difference between s1 and s2
 */
int my_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}


/**
 * get_op_func - returns a pointer to a function
 *
 * @s: operator
 * Return: function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

        for (i = 0 ; i < 6; i++)
	{
		if (*s == '\\')
			return (NULL);
		if (!my_strcmp(s, ops[i].op))
			return (ops[i].f);
	}

	return (NULL);
}
