#include "main.h"


/**
 * _strpbrk - search for a string
 * @s: string
 * @accept: string also but to suit
 * Return: byte in s that suits a byte in accept
 * or NULL if nothing is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int bsd, bod;
	char *p;

	bsd = 0;
	while (s[bsd] != '\0')
	{
		bod = 0;
		while (accept[bod] != '\0')
		{
			if (accept[bod] == s[bsd])
			{
				p = &s[bsd];
				return (p);
			}
			bod++;
		}
		bsd++;
	}

	return (0);
}
