#include "main.h"

/**
 * *_memset - file in memory with the same no. of bytes.
 * @s: pointer for the constant
 * @b: the constant
 * @n: maximum no. of bytes
 * Return: pointer a
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int bsd;

	for (bsd = 0; n > 0; bsd++, n--)
	{
		s[bsd] = b;
	}

	return (s);
}
