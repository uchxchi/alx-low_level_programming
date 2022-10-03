#include "main.h"

/**
* main - a program that prints the number of arguments passed into it.
* @argc: argument to main that tells the number of command line arguments.
* @argv: an array of command line arguments.
*
* Return: 0 on success.
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
