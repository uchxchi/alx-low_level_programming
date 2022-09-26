#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @s: This is the main C string to be scanned.
* @accept: This is the string containing the list of characters to match in s.
*
* Return: the number of bytes in the initial segment of s which consist
* only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int j;

	while (*s != '\0')
	{
		len1++;
		s++;
	}

	while (*accept != '\0')
	{
		len2++;
		accept++;
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[i] == s[i])
			{
				len2++;
				return (len2);
			}
		}
	}

	return (0);
}
