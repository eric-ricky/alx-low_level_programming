#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Description: prints if a number is positive negative or zero
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 'a');
	}
	putchar('\n');
	return (0);
}
