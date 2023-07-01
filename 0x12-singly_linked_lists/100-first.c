#include <stdio.h>

/**
 *a - prints text before main
 *
 */
void a(void)__attribute__((constructor));
void a(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
