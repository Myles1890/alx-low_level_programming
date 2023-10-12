#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This prints names using pointer to function.
 * @name: This string to add.
 * @f: pointer to function.
 * Return: nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
