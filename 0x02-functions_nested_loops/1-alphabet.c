#include "main.h"

/**
  * print_alphabet - the entry point
  *
  * Description: prints if a number is positive negative or zero
  *
  */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
