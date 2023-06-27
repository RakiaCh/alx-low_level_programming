#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
	int i;
	int randomIndex;
	char password[] = 11;
	const char validChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		randomIndex = rand() % (sizeof(validChars) - 1);
		password[i] = validChars[randomIndex];
	}
	
	password[10] = '\0';
	
	return 0;
}

