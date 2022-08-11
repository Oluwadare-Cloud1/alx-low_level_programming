 lines (11 sloc)  255 Bytes
#include "lists.h"
#include <stdio.h>
/**
 * print - Prints before main is executed.
 **/
void print(void) __attribute__ ((constructor));
void print(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
