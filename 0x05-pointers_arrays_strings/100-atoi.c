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
	int num = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	} else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (num > INT_MAX / 10 || (num == INT_MAX / 10 &&
					s[i] - '0' > INT_MAX % 10))
		{
			return (sign == -1 ? INT_MIN : INT_MAX);
		}

		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num * sign);
}
