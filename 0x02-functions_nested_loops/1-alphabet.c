#include <stdio.h>
#include "main.h"
/**
 *  print_alphabet - prints alphabets in lowercase.
 *
 * Return: 1 on success
 */

void print_alphabet();

int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

void print_alphabet()
{
	print_alphabet();
}
