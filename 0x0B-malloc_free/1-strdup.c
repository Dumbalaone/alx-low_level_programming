#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates to new mem locate
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *sss;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	sss = malloc(sizeof(char) * (i + 1));
	if (sss == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		sss[r] = str[r];
	return (sss);
}
