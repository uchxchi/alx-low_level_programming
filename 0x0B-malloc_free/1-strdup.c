#include "main.h"

/**
* _strdup - a function that returns a pointer to a newly
* allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the string to be duplicated.
*
* Return: a pointer to the duplicated string or null if
* memory is insufficient.
*/
char *_strdup(char *str)
{
	char *newstring;
	int i, str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	newstring = malloc((str_len * sizeof(char)) + 1);

	if (newstring == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		newstring[i] = str[i];
	}

	newstring[i] = '\0';

	return (newstring);
}
