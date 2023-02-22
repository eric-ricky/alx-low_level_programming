#include <stdio.h>

/**
  * main - the entry point
  * Return: always 0 (success)
  */

int main(void)
{
	int i, n = 50;
	int fib1 = 1;
	int fib2 = 2;
	int fib3;

	printf("%d, %d", fib1, fib2);

	for (i = 3; i <= n; i++)
	{
		fib3 = fib1 + fib2;
		printf(", %d", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");

	return (0);
}
