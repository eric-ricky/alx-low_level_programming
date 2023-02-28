#include <limits.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the character
 * Return: the integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 &&
					s[i] - '0' > INT_MAX % 10))
		{
			if (sign == -1)
			{
				return (INT_MAX);
			}
			return (INT_MAX);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
