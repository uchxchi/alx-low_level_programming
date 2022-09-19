#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int strlen = 0;
	int indx = 0;
	char tmp;

	while (s[indx++])
		strlen++;

	for (indx = strlen - 1; indx >= strlen / 2; indx--)
	{
		tmp = s[indx];
		s[indx] = s[strlen - indx - 1];
		s[strlen - indx - 1] = tmp;
	}

}
