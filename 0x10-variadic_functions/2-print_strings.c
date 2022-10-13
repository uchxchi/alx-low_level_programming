#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line.
* @separator:  the string to be printed between the strings.
* @n: number of parameters.
* @...: the strings to be printed.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptStr;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		ptStr = va_arg(strings, char *);

		if (ptStr == NULL)
			printf("(nil)");
		else
			printf("%s", ptStr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
