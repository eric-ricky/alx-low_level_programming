#include "main.h"

/**
 * _strspn - entry
 * @s: first
 * @accept: second
 * Return: output
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, valid;
	unsigned int output = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		valid = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				output++;
				valid = 1;
			}
		}

		if (valid == 0)
		{
			return (output);
		}
	}
	return (output);
}
