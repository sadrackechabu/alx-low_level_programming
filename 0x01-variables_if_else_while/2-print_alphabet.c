#include <stdio.h>
/**
 * main - printing alphabetical letters from a to zed
 * using getchar
 *
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;

	}
	putchar('\n');
	return (0);
}
