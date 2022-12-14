#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
