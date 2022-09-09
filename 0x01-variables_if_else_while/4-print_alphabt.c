#include <stdio.h>
/**
 * main - print all the alphabet
 * with exception of leter q
 *
 * Return: 0 otherwise
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

