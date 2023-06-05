#include "main.h"

/**
 * swap_int - swaps to integers using pointers
 * @a: first int
 * @b: second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
