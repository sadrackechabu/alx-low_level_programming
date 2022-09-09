#include <stdio.h>
/**
 * main- prints all the numbers of base
 * ten
 *
 * Return: 0 otherwise
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
