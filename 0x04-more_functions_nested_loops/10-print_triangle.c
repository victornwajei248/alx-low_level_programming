#include "main.h"
/**
 * print_triangle - prints a triangle of size size
 * @size: size of a triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (space = i; space <= (size - 1); space++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
