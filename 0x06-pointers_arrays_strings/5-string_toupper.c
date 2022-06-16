#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}

char *string_toupper(char *c)
{
	int a;

	if (*c >= 65 && *c < 91)
	{
		a = *c - 65;
		*c = 97 + a;
	}
	return (c);
}


