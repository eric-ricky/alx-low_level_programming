#include "main.h"

/**
  * _isalpha - the entry point
  * @c: input character to be checked
  * Return: 1 if character is a letter, lowercase or an uppercase, 0 if not
  *
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
