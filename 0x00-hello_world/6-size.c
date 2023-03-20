#include <stdio.h>
/**
 * main - evaluate the size of the variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int: %ld bytes\n",sizeof(int));
	printf("Size of float: %ld bytes\n",sizeof(float));
	printf("Size of long int: %ld bytes\n",sizeof(long int));
	printf("Size of char: %ld byte\n",sizeof(char));
	printf("Size of long long int: %1d byte(s)\n",sizeof(long long int));	
	return 0;
}
