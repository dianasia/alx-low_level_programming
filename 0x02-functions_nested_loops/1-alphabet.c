#include "main .h"
#include <stdbool.h>

/**
 * print_alphabet - prints the english alphabet from a-z.
 *
 * Return: Always 0.
 */
 void print_alphabet(void)
{
	int i = 97;
	bool a = true;

	while (a)
	{
		_putchar(i);
	
	if (i == 122)
	{
		a = false;
	}
	i++;
	}
	_putchar('\n');
}
