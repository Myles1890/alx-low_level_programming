#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: String that takes binary number or numbers
 * Return: Coverted numbers.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (!b)
	return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		return (0);
		j = 2 * j + (b[i] - '0');
	}
	return (j);
}

