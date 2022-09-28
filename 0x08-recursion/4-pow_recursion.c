#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y.
* @x: the base value.
* @y: the power value.
*
* Return: the value of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (_pow_recursion(x, y - 1) * x);
}
