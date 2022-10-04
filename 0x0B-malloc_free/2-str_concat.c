#include "main.h"

/**
* str_concat -  a function that concatenates two strings.
* @s1: the string to be concatenated upon.
* @s2: the string to be concatenated to s1.
*
* Return: NULL on failure and pointer on success.
*/
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j, concat_index = 0;
	int str_len1 = 0, str_len2  = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[str_len1] != '\0')
		str_len1++;
	while (s2[str_len2] != '\0')
		str_len2++;

	concat_str = malloc(((str_len1 + str_len2) * sizeof(char)) + 1);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			s1[i] = s2[j];
			concat_str[concat_index++] = s1;
		}
	}

	concat_str = '\0';

	return (concat_str);
}
