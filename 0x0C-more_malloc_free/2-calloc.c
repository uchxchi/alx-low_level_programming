#include "main.h"

/**
* _calloc - a function that allocates memory for an array, using malloc.
* @nmemb: the number of elemnts to be allocated.
* @size: the size of the elements.
*
* Return: a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *fillArr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	fillArr = arr;

	for (i = 0; i < (size * nmbem); i++)
		fillArr[i] = '\0';

	return (arr);
}
