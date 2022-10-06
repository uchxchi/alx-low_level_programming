#include "main.h"

/**
* array_range - creates an array of integers.
* @min: the first value of the array.
* @max: the last value of the array.
*
* Return: if min > max or malloc fails: NULL,
* else: a pointer to the new array.
*/
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	size = max - min - 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
