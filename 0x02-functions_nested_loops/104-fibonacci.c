#include <unistd.h>

void print_number(unsigned long num);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long first = 1, second = 2, next;

	int i;

	print_number(first);
	write(1, ", ", 2);
	print_number(second);

	for (i = 2; i < 98; i++)
	{
		next = first + second;
		write(1, ", ", 2);
		print_number(next);
		first = second;
		second = next;
	}

	write(1, "\n", 1);
	return (0);
}

/**
 * print_number - Custom function to print a number
 *
 * @num: The number to print
 */
void print_number(unsigned long num)
{
	unsigned long divisor = 1;
	unsigned long temp = num;

	while (temp >= 10)
	{
		temp /= 10;
		divisor *= 10;
	}

	while (divisor > 0)
	{
		char digit = '0' + num / divisor;

		write(1, &digit, 1);
		num %= divisor;
		divisor /= 10;
	}
}

