#include <stdio.h>
/**
 * _strlen - Returns lenth of string
 * @str: string to get length
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
