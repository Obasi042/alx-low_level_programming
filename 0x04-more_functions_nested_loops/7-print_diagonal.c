#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{

	int in = 0, out;

	while (in < n && n > 0)
	{
		out = 0;
		while (out < in)
		{
			_putchar(' ');
			out++;
		}

		_putchar('\\');
		_putchar('\n');
		in++;
	}
	if (in == 0)
		_putchar('\n');

}
