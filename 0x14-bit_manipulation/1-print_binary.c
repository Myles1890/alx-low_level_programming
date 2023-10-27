#include "main.h"

/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int k;
	for (i = 63; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			_putchar('1');
			j++;
		}
		else if (k)
		_putchar('0');
	}
	if (!k)
	_putchar('0');
}


