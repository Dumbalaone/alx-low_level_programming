#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long prev_num = 1, current_num = 2, temp, sum = 2;

	while (1)
	{
		temp = prev_num + current_num;
		if (temp > 4000000)
			break;
		if (temp % 2 == 0)
			sum += temp;

		prev_num = current_num;
		current_num = temp;
	}
	printf("%lu\n", sum);
	return (0);
}
