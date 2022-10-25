#include "main.h"
/**
 * _puts - prints string followed by newline
 * @str: pointer to sting
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
