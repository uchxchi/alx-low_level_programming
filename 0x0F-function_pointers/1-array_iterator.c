#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
*                  on each element of an array.
* @array: the array to execute the function on.
* @size: the size of the array.
* @action: pointer to th function to be executed.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
