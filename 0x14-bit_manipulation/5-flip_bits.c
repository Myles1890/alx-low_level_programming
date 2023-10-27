#include "main.h"

/**
 * flip_bits - checks the number of bits to be changed
 * from one number to others
 * @n: start num
 * @m: end num
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int k;
	unsigned long int l = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		k = l >> i;
		if(k & 1)
			j++;
	}
	return (j);
}
