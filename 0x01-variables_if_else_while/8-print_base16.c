#include<stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	int a;
	char Alphabet;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (Alphabet = 'a'; Alphabet <= 'f'; Alphabet++)
		putchar(Alphabet);
	putchar('\n');
	return (0);
}
