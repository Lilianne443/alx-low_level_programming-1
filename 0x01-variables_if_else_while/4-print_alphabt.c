#include <stdio.h>

/**
 * main - prints the alphabeth in lower case
 * followed by a new line, except q and e
 * Return: Always (0)
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');

	return (0);
}
