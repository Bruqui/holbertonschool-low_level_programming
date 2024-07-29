#include <stdio.h>

/**
 * pre_main - Prints a message before the main function executes.
 */

void pre_main(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
