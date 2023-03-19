#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: returns 0 at success
 */

int main(void)
{
char c;

for (c = 'a' ; c <= 'z' ; c++)
{
	putchar(c);
}
for (c='A' ; c <= 'Z' ; c++ )
{
	putchar(c);
}
putchar('\n');
return (0);
}
