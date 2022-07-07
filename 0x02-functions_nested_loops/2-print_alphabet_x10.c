#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints 10 times the alphabet, in lowercase
 *
 * Result: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
