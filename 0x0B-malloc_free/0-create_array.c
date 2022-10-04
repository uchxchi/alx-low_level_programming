#include "main.h"

/**
* create_array - a function that creates an array of chars, and initializes
* it with a specific char.
* @size: the size of the array.
* @c: the character to initialize the array.
*
* Return: a pointer to the array, or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrPtr;

	arrPtr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arrPtr[i] = c;
	}

	return (arrPtr);
}
