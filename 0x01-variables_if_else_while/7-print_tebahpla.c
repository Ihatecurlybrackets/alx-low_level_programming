#include <stdio.h>

/**
 * main - this is te main function
 *
 * Return: returns 0 when successful
 */

int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
