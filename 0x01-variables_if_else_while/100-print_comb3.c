#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: returns 0 when successful
 */

int main(void)
{
int c;
int n;

for (c = 0; c <= 9; c++)
{
	for (n = 1; c <= 9; n++)
	{
		putchar('0' + n);
		putchar('0' + c);
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
