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

	printf("%i ", n)

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n = 0)
	{
		printf("is zero\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	return (0);
}

