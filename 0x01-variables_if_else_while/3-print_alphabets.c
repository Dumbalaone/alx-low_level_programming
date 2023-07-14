#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter % 2 == 0)
		{
			putchar(letter);
		}
		else
		{
			putchar(letter - 32);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
