#include <stdio.h>

void before_main(void) __attribute__((constructor));
/**
 * before_main - before main.
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my");
	printf(" house upon my back!\n");
}
