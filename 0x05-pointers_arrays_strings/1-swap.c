#include <stdio.h>
/**
 * swap_int - Swaps values of integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
