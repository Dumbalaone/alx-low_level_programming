#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: The string to print
 * Description:
 * this function takes a pointer to a character array (string)
 * and prints string in reverse order,character by character
 * Return:void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
