#include "main.h"

/**
 * Main - Entry Point
 *
 * Description for for function print_alphabet
print_alphabet
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
