#include "main.h"

/**
 * clear_bit - the value of abit to be set to a given bit to 0
 * @n: A pointer that change the number.
 * @index: An index that clears a bit.
 *
 * Return: 1 successful and -1 it fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
