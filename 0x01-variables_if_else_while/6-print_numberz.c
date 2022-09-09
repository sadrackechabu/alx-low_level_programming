#include <stdio.h>
/**
 * main - block
 * that prints all the single digits of base 10
 * starting from 0
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
