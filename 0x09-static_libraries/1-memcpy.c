#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest.
* @dest: the destination memory area src is copied to.
* @src: the memory area that is copied to dest.
* @n: the number of bytes from memory area src.
*
* Return: a pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
