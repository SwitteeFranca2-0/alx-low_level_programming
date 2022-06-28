#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
		printf("%s\n", tab[i]);
