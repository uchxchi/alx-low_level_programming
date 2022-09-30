#include "main.h"

/*
 * _strncat: A function that concatenates two strings.
 * @dest - The string that will be appended to.
 * @src - The string that will be appended to src.
 * @n - The number of bytes of the string.
 *
 * Return: A pointer to the destination string @dest.
 */ 
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
