#include <string.h>

/**
 *puts_half - print half
 *Description: prints half of a string
 *Return: Always (0);
 */

void puts_half(char *str)
{
int x, y, i;

x = strlen(str);
if (x % 2 == l)
y = x / 2 + 1;
else
y = x / 2;
for (i =y; i < x; i++)
_putchar(str[i]);	
_putchar('\n');
}
