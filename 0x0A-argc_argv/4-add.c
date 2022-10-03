#include "main.h"

/**
*
*
*
*
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 0; i <argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d \n", sum);
	}
	return (1);
}
