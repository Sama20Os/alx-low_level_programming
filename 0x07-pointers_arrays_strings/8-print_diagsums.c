#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - description
 * @a: 2d array of int
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int bsd, s1 = 0, s2 = 0;

	for (bsd = 0; bsd < size; bsd++)
	{
		s1 += a[bsd];
		s2 += a[size - bsd - 1];
		a += size;
	}
	printf("d, ", s1);
	printf("d\n", s2);
}
