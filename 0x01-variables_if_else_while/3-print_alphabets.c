#include<stdio.h>
/**
 * main -Prints the alphabet in lowercase, and then in uppercase,
 * followed by new line.
 * Return:Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'z'; letter++)
		putchar(letter);
	return (0);
}