#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: return 0 at success
 */

int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
	putchar('0' + c);
	if (c == 9)
	{
		putchar('\n');
		break;
	}
	putchar(',');
	putchar(' ');
}
return (0);
}
