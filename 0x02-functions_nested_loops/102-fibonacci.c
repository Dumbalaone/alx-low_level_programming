#include <stdio.h>
/**
 * main - Entry point of the progam
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long prev_num = 1, current_num = 2, temp;

	int i;

	printf("%lu, %lu", prev_num, current_num);

	for (i = 2; i < 50; ++i)
	{
		temp = prev_num + current_num;
		printf(", %lu", temp);
		prev_num = current_num;
		current_num = temp;
	}
	printf("\n");
	return (0);
}
