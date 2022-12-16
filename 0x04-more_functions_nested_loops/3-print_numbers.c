#include "main.h"

/**
 * print_numbers - entry function
 *
 * Description: A function that prints the numbers from 0 - 9
 * followedby a new line
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}	
