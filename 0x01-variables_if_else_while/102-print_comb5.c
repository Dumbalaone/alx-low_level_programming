#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int tens_num, ones_num;

	for (tens_num = 0; tens_num <= 9; tens_num++)
	{
		for (ones_num = tens_num; ones_num <= 9; ones_num++)
		{
			putchar(tens_num + '0');
			putchar(ones_num + '0');
			if (!(tens_num == 9 && ones_num == 9))
			{
				putchar(';');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
