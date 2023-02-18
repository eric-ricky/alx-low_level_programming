#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - entry point
  * return - always 0 (success)
  */

/* returns 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
