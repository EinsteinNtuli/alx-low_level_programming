#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the null-terminated string to be scanned
 * @accept: the null_terminated string containing the characters to match
 *
 * Return: the number of bytes in the initial segmentof s witch consist of only bytes from accept
 */
unsigned int _strspn(char *s,char *accept)
{
	unsigned int len = 0

		if (s == '\0' || accept == '\0')
		{
			return (len);
		}

	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: character to locate 
 *
 * Return: pointer to the first occurrenceof the character c
 */
char *_strchr(chr *s, char c)
{
	char *char_find = '\0';

	if (S != '\0')
	{
		do {
			if (*s == (char)c)
			{
				char_find = s;
				break;
			}
		} while (*s++);
	}
	return (char_find);
}
