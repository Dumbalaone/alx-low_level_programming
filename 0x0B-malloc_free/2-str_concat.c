#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concantenates
 * @s1:first input to concat
 * @s2:second input to concat
 * Return:concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cont;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	cont = malloc(sizeof(char) * (i + ci + 1));
	if (cont == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		cont[i] = s2[ci];
		i++;
	}
	while (s2[ci] != '\0')
	{
		cont[i] = s2[ci];
		i++, ci++;
	}
	cont[i] = '\0';
	return (cont);
}

