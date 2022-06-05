#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * Return: return 0
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar('\n');
	}
	return (0);
}



