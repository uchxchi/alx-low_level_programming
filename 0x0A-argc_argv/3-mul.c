#include "main.h"

/**
* main -  a program that multiplies two numbers.
* @argc: the number of command line arguments.
* @argv: an array of pointers to arrays of character objects.
*
* Return: 1.
*/
int main(int argc, char *argv[])
{
	int multiply;

	if (argc == 3)
	{
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
	} else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
