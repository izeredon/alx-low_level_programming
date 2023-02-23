#include "main.h"

/**
 * Print_most_numbers -Print the numbersf from 0 to 9
 * Discription: print number excluding 2 an 4
 * Return numbers from 0 to 9 
 */

void print_most_numbers(void)

{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x ==2 || x == 4)
		{
		continue;
		}
		else
		{
		_putchar(x + '0');
		}
	}
	_putchar('\n');
}
