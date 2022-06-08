#include "main.h"

/**
 * _islower - a function that is goint to determine the result
 * @c: parameter
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
