#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase.
 *
 * Return: 1 on success
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
