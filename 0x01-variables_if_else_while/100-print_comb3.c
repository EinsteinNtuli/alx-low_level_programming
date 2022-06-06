#include <stdio.h>
/**
* main - entry point
*
* Return: 0 
*/
int main(void)
{
	int i;
	int v;

	for (i = '0'; i <= '9'; i++)
	{
		for (v = '0'; v <= '9'; v++)
		{
			if (v == i || v == '0')
			{
				continue;
			}
			putchar(i);
			putchar(v);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
