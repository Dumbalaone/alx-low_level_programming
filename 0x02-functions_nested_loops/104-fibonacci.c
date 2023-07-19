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
	int i;
	char buffer[21];
	int index = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return;
	}

	while (num > 0)
	{
		buffer[index++] = '0' + num % 10;
		num /= 10;
	}

	for (i = index - 1; i >= 0; i--)
	{
		write(1, &buffer[i], 1);
	}
}

