#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int hundreds_num, tens_num, ones_num;

	for (hundreds_num = 0; hundreds_num <= 7; hundreds_num++)
	{
		for (tens_num = hundreds_num; tens_num <= 8; tens_num++)
		{
			for (ones_num = tens_num + 1; ones_num <= 9; ones_num++)
			{
				putchar(hundreds_num + '0');
				putchar(tens_num + '0');
				putchar(ones_num + '0');
				if (!(hundreds_num == 7 && tens_num == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
