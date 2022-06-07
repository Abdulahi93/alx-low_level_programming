#include"main.h"
/**
 * _islower - tests where a character is a lower case.
 *Return: 1 if it is lower case letter.
 * or 0 if it's not lower case
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')

			return (1);
		else
			return (0);
}

