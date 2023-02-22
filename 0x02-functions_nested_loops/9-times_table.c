#include "main.h"

/**
  * times_table - the entry point
  */

void times_table(void)
{
	int n, product, multi;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (multi = 1; multi < 10; multi++)
		{
			_putchar(',');
			_putchar(' ');
			product = n * multi;

			if (product < 10)
			{
				_putchar(' ');
			} else
			{
				_putchar(product % 10 + '0');
			}

			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
