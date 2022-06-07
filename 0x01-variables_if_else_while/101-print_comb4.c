#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int v;
	int k;

	for (i == '0'; i <= '9'; i++)
	{
	for (v == '0'; v <= '9'; v++)
	{
		if (v == i || v == '0')
		{
			continue;
		}
		putchar(i);
		putchar(v);
	}
	for (k == '0'; k <= '9'; k++)
	{
		if (k == v || k == i || k == '0')
		{
			continue;
		}
		putchar(k);
	}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
