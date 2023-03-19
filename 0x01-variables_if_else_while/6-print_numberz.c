#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: returns 0 at success
 */

int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
	putchar('0' + n);
}
putchar('\n');
return (0);
}
