#include <stdio.h>

/**
 * main - prints the minimum number to make change for an amount.
 * @argc: this the number of arguments
 * @argv: the array of arguments
 * Return: 0 if successful, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	num = atoi(argv[1]);
	result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	if (num < '0')
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0, j++)
	{	
		while (num > coins[j])
		{
			num -= coins[j];
			result++;
		}
	}

	
	printf("%d\n", result);
	return (0);
}	
	

