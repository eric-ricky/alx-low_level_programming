#include "main.h"

/**
  * print_sign - the entry point
  * @n: input character to be checked
  * Return: 1 if character is a letter, lowercase or an uppercase, 0 if not
  *
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
