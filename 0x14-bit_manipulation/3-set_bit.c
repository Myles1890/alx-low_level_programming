#include "main.h"

/**
 * set_bit - the given index sets a bit 1.
 * @n: it's nothing but a pointer to change a number.
 * @index: An index that set a bit 1.
 * Return:  To be 1 if succesful and -1 if it fails.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
