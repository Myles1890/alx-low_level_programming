#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates some memory using malloc.
 * @b: size of bytes to be allocated.
 *
 * Return: a pointer to address of allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
