#include "main.h"


/**
 * *_memcpy - copy spaces inside memory
 * @dest: memory spaces
 * @src: source
 * @n: length of src to copy
 *
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int bsd;

	for (bsd = 0; bsd < n; bsd++)
	{
		dest[bsd] = src[bsd];
	}
	return (dest);
}
