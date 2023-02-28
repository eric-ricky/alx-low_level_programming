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
	int res = 0;
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (res > INT_MAX / 10 || (res == INT_MAX / 10 &&
						s[i] - '0' > INT_MAX % 10))
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}

			res = res * 10 + (s[i] - '0');
		}

		if (s[i] == '+')
		{
			sign *= 1;
		}

		if (res != 0 && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}

		i++;
	}
	return (sign * res);
}
