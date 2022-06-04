#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-Program entry piont
 *
 * Return: 0-no error, non-zero if errors.
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

