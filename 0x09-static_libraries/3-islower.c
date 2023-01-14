#include "main.h"
/**
 * _islower - check if its lower case
 * @c: is the parameter to be checked
 * Return: 1 f is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}

