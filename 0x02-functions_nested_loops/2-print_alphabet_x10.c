#include "main.h"

/**
 *  print_alphabet_x10  - this program prints 10 times the alphabete
 *
 *  return: 0
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;




		while (i <= 9)
		{
			char c = 'a';

			while (c <= 'z')
			{
				_putchar(c);
				c++;
			}
			_putchar('\n');
			i++;
		}


}
