void print_number(unsigned long num);
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long first = 1, second = 2, next;

	int i;

	print_number(first);

	print_number(second);

	for (i = 2; i < 98; ++i)
	{
		next = first + second;
		printf(", ");
		print_number(next);
		first = second;
		second = next;
	}
	return (0);
}
/**
 * print_number - Custom function to print a number
 * @num: The number to print
 */
void print_number(unsigned long long num)
{
	unsigned long long divider = 1;

	unsigned long long copy = num;

	while (divider > 0)
	{
		char digit = '0' + num / divider;

		putchar(digit);
		divider /= 10;
	}
}


