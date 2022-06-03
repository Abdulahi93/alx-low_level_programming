#include<stdio.h>
/**
 *main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0;
 */
int main(void)
{
	char Alphabet;

	for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
	{
		if (Alphabet != 'e' && Alphabet != 'q')
			putchar (Alphabet);
	}
	putchar('\n');
	return (0);

}
