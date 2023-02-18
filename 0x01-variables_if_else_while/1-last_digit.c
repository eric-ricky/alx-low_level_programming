#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Description: prints a string based on certain conditions
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	float last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %f and is greater than 5\n", n,
				last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %f and is 0\n", n, last_digit);
	} else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %f and is less than 6 and not 0\n",
				n, last_digit);
	}

	return (0);
}
