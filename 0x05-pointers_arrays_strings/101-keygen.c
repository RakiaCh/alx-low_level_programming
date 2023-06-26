#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	srand(time(NULL));
	int passwordLength = 10;
	char password[passwordLength + 1];
	const char validChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	
	for (int i = 0; i < passwordLength; i++)
	{
		int randomIndex = rand() % (sizeof(validChars) - 1);
		password[i] = validChars[randomIndex];
	}
	
	password[passwordLength] = '\0';
	
	return 0;
}

