#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
	int s = 0, e = 7, s1 = 1, e1 = 8, s2 = 2, e2 = 9;
	int tmp1 = 1, tmp2 = 2, loop = 1;

	while (s <= e)
	{
		s1 = tmp1;
		while (s1 <= e1)
		{
			s2 = tmp2;
			while (loop)
			{
				if (s2 >= e2)
					loop = 0;

				putchar(s + '0');
				putchar(s1 >= e1 ? e1 + '0' : s1 + '0');
				putchar(s2 >= e2 ? e2 + '0' : s2 + '0');

				if (s != e)
				{
					putchar(',');
					putchar(' ');
				}
				s2++;
			}
			s1++;
			tmp2++;
			loop = 1;
		}
		s++;
		tmp1++;
		loop = 1;
	}
	putchar('\n');
	return (0);
}
