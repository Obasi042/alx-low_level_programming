#include "main.h"

/**
 * _isupper - a function that checks for upper cases
 * @c: the variabble
 * Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
