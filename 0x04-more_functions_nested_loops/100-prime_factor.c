#include <stdio.h>

/**
 * main - entry point
 * Return: aalways 0 (success)
 */

int main(void)
{
	long prime = 612852475143, n;

	while (n < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (n = 3; n < (prime / 2); n += 2)
		{
			if ((prime % n) == 0)
			{
				prime /= n;
			}
		}
	}

	printf("%ld\n", prime);

	return (0);
}
