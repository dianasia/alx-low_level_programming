#include "main.h"

/**
 * print_alphabet - This program prints out the alphabet from a-z
 *
 * return: 0
 *
 */

void print_alphabet(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}
