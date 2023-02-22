#include "main.h"

/**
  * print_times_table - the entry point
  * @n: n times table
  */

void print_times_table(int n)
{
	int num, product, multi;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');
				product = num * multi;

				if (product <= 99)
				{
					_putchar(' ');
				}

				if (product <= 9)
				{
					_putchar(' ');
				}

				if (product >= 100)
				{
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
				} else if (product <= 99 && product >= 10)
				{
					_putchar(product / 10 + '0');
				}

				_putchar(product % 10 + '0');
			}

			_putchar('\n');
		}
	}
}
