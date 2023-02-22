#include "main.h"

/**
  * print_last_digit - the entry point
  * @n: integer to be computed
  * Return: the last value of the digit
  *
  */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
