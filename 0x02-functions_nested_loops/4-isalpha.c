#include"main.h"
/**
 * _isalpha -tests if a character is from the english alphabet.
 * @c:Character to be checked.
 * Return:1 if th character is no and english character.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
