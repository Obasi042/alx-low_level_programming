#include <stdio.h>
/**
 *   * main - Prints sized of characters
 *
 *    *    *Return: Always 0 (success)
 */


int main(void)

{
	printf("int is %2d bytes \n", sizeof(short int));

	printf("long int is %2d bytes \n", sizeof(long int));

	printf("float is %2d bytes \n", sizeof(float));

	printf("double is %2d bytes \n", sizeof(double));

	printf("long double is %2d bytes \n", sizeof(long double));

	return(0)

}
