#include"main.h"
/**
 * print_rev - Prototype
 * Return: On success 1.
 * @s: function parameter
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
