#include <stdio.h>
/**
 * main - evaluate the size of the variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of float: %1d byte(s)\n", sizeof(float));	
	return 0;
}
