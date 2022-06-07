#include"main.h"
/**
 * main - prints putchar.
 * Return: it returnts to 0
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
