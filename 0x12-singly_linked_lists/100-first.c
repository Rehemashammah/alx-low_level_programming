#include <stdio.h>

void befor(void) __attribute__ ((constructor));
/**
 * before - print before main
 */
void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
