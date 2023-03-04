#include "main.h"

/**
 * cap_string - entry point
 * @s: character param
 * Return: a character
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] > 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - ('a' - 'A');
	}

	for (i = 1; s[i] != '\0'; i++)
	{
		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
					s[i] == ',' ||
					s[i] == ';' ||
					s[i] == '.' ||
					s[i] == '!' ||
					s[i] == '?' ||
					s[i] == '"' ||
					s[i] == '(' ||
					s[i] == ')' ||
					s[i] == '{' ||
					s[i] == '}') &&
				(s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] = s[i + 1] - ('a' - 'A');
		}
	}

	return (s);
}
