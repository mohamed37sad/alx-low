#include <unistd.h>
/**
 * main - prints "and that piece of art is useful" - Dora korpar, 2015-10-19",
 * followed by a newline, to standard error.
 * return: Always l.
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
