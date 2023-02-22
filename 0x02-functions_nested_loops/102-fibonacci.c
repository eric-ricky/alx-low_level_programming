#include <stdio.h>

/**
  * main - the entry point
  * Return: always 0 (success)
  */

int main(void)
{
	int a = 1;
	int b = 2;
	int i, c;

	printf("%d, %d, ", a, b);

	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
