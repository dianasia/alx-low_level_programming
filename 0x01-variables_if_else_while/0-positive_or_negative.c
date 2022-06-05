#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 *
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
=======
 * 
 * return: always 0 (succes)
 */
 int main (void)
{
	int n;
	strand(time (0));
	n = rand() - rand_max / 2;
>>>>>>> d6806f98e400cfd33ee3bb61f3722a119eef172d
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

