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
	if (c == 'e' || c == 'q')
	{
		continue;
	}
	putchar(c);
}
putchar('\n');
return (0);
}
