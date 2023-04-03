#include "main.h"


/**
 * *_strchr - a memory file with the same no. of bytes.
 * @s: put constants
 * @c: the constant itself
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int bsd;

	for (bsd = 0; s[bsd] >= '\0' ; bsd++)
	{
		if (s[bsd] == c)
		{
			return (s + bsd);
		}
	}

	return ('\0');
}
