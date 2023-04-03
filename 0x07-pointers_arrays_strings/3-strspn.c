#include "main.h"


/**
 * _strspn - put the length of substring.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bsd, bod;

	for (bsd = 0; s[bsd] != '\0'; bsd++)
	{
		for (bod = 0; accept[bod] != s[bsd]; bod++)
		{
			if (accept[bod] == '\0')
				return (bsd);
		}
	}
	return (bsd);
}
