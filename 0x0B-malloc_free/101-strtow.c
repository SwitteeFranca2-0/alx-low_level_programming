#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_tab(char **tab)
{
	int i;

	for (i = 0;  tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

int main(void)
{
	char **tab;

	tab = strtow("     ALX school #cisfun   ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}


int **strtow(char *str)
{
	int i;
	int sp = 0;
	int wr = 0;
	int **p = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == 32)
		{
			sp = 1;
		}
		if (str[i] != 32)
		{
			wr = 1;
		}
		if (sp == 1 && wr == 1)
		{
			putchar(str[i]);
		}
		if (wr == 1 && str[i + 1] == 32)
		{
			putchar('\n');
			sp = 0;
			wr = 0;
		}
	}
	return (wr);
}