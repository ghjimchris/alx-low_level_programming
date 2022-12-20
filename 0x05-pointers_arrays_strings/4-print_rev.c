#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Iterating to find the length of string and point to the last character */
	while (*s != '\0')
	{
		len++;
		++s;
	}

	s--; /* go back to character begore null character */

	/* print string reversed */
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
