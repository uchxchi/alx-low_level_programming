#include "main.h"

/**
* main - a program that prints all arguments it receives.
* @argc: an integer that tells the number of comman line arguments.
* @argv: an array of pointers to arrays of character objects.
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}

	return (0);
}
