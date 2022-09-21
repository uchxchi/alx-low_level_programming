#include "main.h"

/*
 * _strcat: A function that concatenates two strings.
 * @dest - The string to be appended to.
 * @src - the string to be appended.
 *
 * Return: A pointer to the destination string @dest.
 */ 
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
