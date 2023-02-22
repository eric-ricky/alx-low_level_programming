#include "main.h"

/**
  * _islower - the entry point
  * @c: input character to be checked
  * Return: 1 if character is lowercase, 0 if not
  *
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
