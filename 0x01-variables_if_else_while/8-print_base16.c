#include <stdio.h>

/**
 *main - Prints the alphabet in lowercase.
 *Return: Always 0.
 * hexadecimal
 * -123456789abcde
 */
int main(void)
{
char num;
int letter;

for (num = 48; num <= 57; num++)
putchar(num);
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
putchar(10);
return (0);
}
