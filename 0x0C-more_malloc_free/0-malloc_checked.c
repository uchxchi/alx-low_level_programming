#include "main.h"

/**
* malloc_checked - a function that allocates memory using malloc.
* @b: the number of bytes to be allocated.
*
* Return: a pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(b * sizeof(unsigned int));

	if  (mem == NULL)
		exit(98);

	return (mem);
}
