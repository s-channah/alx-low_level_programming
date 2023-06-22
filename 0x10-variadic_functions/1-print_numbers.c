#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: the string separating numbers printed
 * @n: no of integer parameter passed in the function
 * @...: variable no of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);

}
