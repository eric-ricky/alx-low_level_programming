#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 */

#define PASSWORD_LENGTH 6

int main(void)
{
	int i;
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[{]};:',<.>/?";

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % sizeof(charset)];
	}
	
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	if (strcmp(password, "CrackMe101:)123") == 0)
	{
		printf("Tada! Congrats\n");
	}
	return (0);
}
