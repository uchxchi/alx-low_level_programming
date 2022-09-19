#include "main.h"

/**
 * puts2 - Prints every character of a string starting with the first.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i <= str; i++)
		_putchar(i);

	_putchar('\n');
}
