#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 * @s: pointer variable.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int str = 0;

	while (s[str] != '\0')
		str++;

	return (str);
}
