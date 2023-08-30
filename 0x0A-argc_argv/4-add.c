#include <stdio.h>
#include <stdlib.h>

/**
 * main - it takes all integers and returns the sum
 * @argc: this the number of arguments
 * @argv: the array of arguments
 * Return: 1 if non-integer is passed, 0 if otherwise.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}


			sum += atoi(argv[i]);

		}



	}

	printf("%d\n", sum);
	return (0);
}
