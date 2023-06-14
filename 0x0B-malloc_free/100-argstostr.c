#include "main.h"
#include <stdlib.h>

/**
 * 
 * 
 *
 * 
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			count++;

	count = count + ac + 1;
	
	str = (char *)malloc(sizeof(char) * count);
	
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];
		s[k++] = '/n';
	}
	s[k] = '\0';

	return (str);
}
