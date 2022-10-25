#include "main.h"
/**
 * swap_int - swap values of two int
 * @a: pointer to one int
 * @b: pointer to second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
