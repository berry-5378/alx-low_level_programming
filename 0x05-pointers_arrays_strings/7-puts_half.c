#include"main.h"
/**
 * puts_half - Prototype
 * Return: On success 1.
 * @str: function parameter
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	if ((i % 2) == 0)
		for (j = i / 2 ; j < i ; j++)
		{
			_putchar(str[j]);
		}
	else
		for (j = (i - 1) / 2 ; j < i ; j++)
		{
			_putchar(str[j]);
		}
	_putchar('\n');
}
