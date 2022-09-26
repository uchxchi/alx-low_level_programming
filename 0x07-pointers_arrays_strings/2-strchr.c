#include "main.h"

/**
* _strchr - Returns a pointer to the first occurrence of the
* character c in the string s, or NULL if the character is not found
* @s: the string from where the character will be searched.
* @c: the character to be searched in the full string.
*
* Return: 1 on success.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
