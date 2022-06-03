#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * 
 * return: always 0 (succes)
 */
 int main (void)
{
	int n;
	strand(time (0));
	n = rand() - rand_max / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

