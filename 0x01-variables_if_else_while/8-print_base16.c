#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: return 0 when successful
 */

int main(void)
{
int n;
char c;

for (n = 0; n <= 9; n++)
{
	putchar('0' + n);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
