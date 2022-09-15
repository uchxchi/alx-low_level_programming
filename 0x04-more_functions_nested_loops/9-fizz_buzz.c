#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf(" fizzbuzz");
		}else if (i % 3 == 0)
		{
			printf(" fizz");
		}else if (i % 5 == 0)
		{
			printf(" buzz");
		}else if (i == 1)
		{
			printf("%d", i);
		}else
		{
			printf(" %d", i);
		}
	}
	return (0);
}
