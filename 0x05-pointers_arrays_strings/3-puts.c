#include"main.h"
/**
 * _puts - Prototype
 * Return: On success 1.
 * @str: function parameter
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
