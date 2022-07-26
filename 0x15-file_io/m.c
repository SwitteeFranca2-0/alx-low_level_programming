#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>

int main(void)
{
	int file;
	char buffer[50];
	char strng[] = "My house";

	file = open("R", O_RDWR|O_CREAT, 0600);
	if (file == -1)
	{
		printf("failed to create.");
		return (1);
	}

	close (file);

	file = open("S", O_CREAT, 0444);
	if (file != -1)
	{
		printf("successful in creation.");
	}

	close(file);

	return (0);




}