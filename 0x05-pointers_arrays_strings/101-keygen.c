#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int password;
	srand(time(0));
	password = rand();
	
	printf("%i\n", password);
	
	return (0);
}
