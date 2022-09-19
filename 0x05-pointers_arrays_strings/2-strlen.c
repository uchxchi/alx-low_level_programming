#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @len: The string to get the length of.
 * @s: pointer variable.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
