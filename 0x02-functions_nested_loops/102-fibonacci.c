#include <stdio.h>

/**
  * main - the entry point
  * Return: always 0 (success)
  */

int main(void)
{
	int count, sum;
	int fib1 = 0;
	int fib2 = 1;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;

		printf("%d", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
		{
			printf("\n");
		} else
		{
			printf(", ");
		}

	}

	return (0);
}
