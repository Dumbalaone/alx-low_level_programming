#include "main.h"
/**
 * _memset - fill a block of memory with specicfic value
 * @s: - starting address to be filled
 * @b: - the desired value
 * @n: - the desired value
 * Return: changed array with new values
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
