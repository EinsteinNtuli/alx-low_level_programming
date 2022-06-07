#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char puts[8] = "putchar";
	int i;
	
	putchar('_');
	for (i = 0; i <= 8; i++)
	{
		putchar(puts[i]);
	}
	putchar('\n');
	return (0);
}
