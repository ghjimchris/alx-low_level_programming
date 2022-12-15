#include "main.h"
/**
 * _isdigit - function that checks if it's a digit
 * @c: takes in a charcter or number
 * Return: 1 if number and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
