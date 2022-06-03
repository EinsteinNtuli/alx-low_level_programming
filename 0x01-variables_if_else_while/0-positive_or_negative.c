#include <stdio.h>

int main(void)
{
	int n;
       	n = rand() - RAND_MAX / 2;

	printf("%i\n", n);

	if (n > 0);
	{
	printf("is positive\n");
	return (0);
	}

	
	if (n = 0);
	{
	printf("is zero\n");
	return (0);
	}
	
	if (n < 0);
	{
		printf("is negative\n");
		return (0);
	}
}

