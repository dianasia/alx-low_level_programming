#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main entry point
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	int n, lastdigits;
	
	srand(time(0));
	n = rand() -Rand_Max / 2;
	if (n>0)
	{
	       printf("%d is positive\n",n);
       }
	else if (n==0)
     {
	      printf("%d is negative\n",);
      }
	else
      {
	      printf("%d is negative\n",);
      }
      return (0);
}

