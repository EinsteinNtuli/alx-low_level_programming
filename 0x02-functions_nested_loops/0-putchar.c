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
	int v = '_';
	putchar(v);
	for (i = 0; i <= 8; i++)
	{
		putchar(puts[i]);
	}
	putchar('\n');
	return (0);
}
