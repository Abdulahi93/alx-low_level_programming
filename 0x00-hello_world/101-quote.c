#include <stdio.h>
#include <unistd.h>

/**
 *main - Prints exactly 'and that piece of art is useful..'
 * - Dor korpar , 2015-10-19',
 *   followed by a new lin, to the standart erro.
 *   Return aways 0 (sucess).
 */

int main(void)
{
	write(2, "and that piece of art is useful \" - Dora korpar,
			2015-10-19 \n", 59);
	return (1);

}
