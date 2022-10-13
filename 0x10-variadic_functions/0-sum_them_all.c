#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: the number of parameters.
* @...: the parameters to be summed.
*
* Return: the sum of the parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list parameters;

	va_start(parameters, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(parameters, int);
	}

	va_end(parameters);

	return (sum);
}
