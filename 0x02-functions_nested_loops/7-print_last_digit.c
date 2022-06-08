#include"main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 *  @nld: digit to find the last place of
 *  Return: The last digit.
 */

int print_last_digit(int nld)

{
	if (nld < 0)
	nld = nld * -1;
	_putchar((nld % 10) + '0');
	return (n % 10);
}
