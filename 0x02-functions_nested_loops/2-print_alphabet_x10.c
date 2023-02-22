#include "main.h"

/**
  * print_alphabet - the entry point
  *
  * Description: prints if a number is positive negative or zero
  *
  */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
