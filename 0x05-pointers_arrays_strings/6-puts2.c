#include"main.h"
/**
 * puts2 - Prototype
 * Return: On success 1.
 * @str: function parameter
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != 0; i++)
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

	_putchar('\n');
}