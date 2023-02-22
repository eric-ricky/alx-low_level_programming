#include <stdio.h>

/**
  * print_to_98 - the entry point
  * @n: the starting number
  */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d, ", i);
		}
	} else
	{
		for (i = n; i > 97; i--)
		{
			printf("%d, ", i);
		}
	}

	printf("98\n");
}
