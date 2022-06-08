#include "main.h"
/**
 * _abs- returns 1 if n is lowercase, 0 otherwise
 * @n: integer to be checked
 * Return: abs(n)
 */
int _abs(int n)
{
	if (n >= 0)
	return (n);
	else
	return (-1 * n);
}
/**
 * print_last_digit - pritns the last digit of n
 * @nld: integer whose last digit is displayed
 * Return: lastdigit of number
 */
int print_last_digit(int nld)
{
	int ld;

	ld = _abs((nld % 10));

	_putchar(ld + 48);
	return (ld);
}
