#include <stdio.h>
void before_main() __attribute__((constructor));

/**
 * before_main - function that is excuted before main function
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
