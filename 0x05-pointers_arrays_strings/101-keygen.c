#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 */

#define PASSWORD_LENGTH 10

int main(void)
{
	int i;
	int index;
	char password[PASSWORD_LENGTH + 1];

	const char *charset = "abcdefghijklmnopqrstuvwxyzA";

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		index = rand() % 62;
		password[i] = charset[index];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
