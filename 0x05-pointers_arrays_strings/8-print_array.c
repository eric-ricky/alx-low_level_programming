#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: the first integer
 * @n: the second integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
