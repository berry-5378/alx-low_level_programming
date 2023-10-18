#include"main.h"
/**
 * puts_half - Prototype
 * Return: On success 1.
 * @str: function parameter
 */
void puts_half(char *str)
{
	int i = 0, k, j;

	while (str[i] != '\0')
	{
		i++;
	}
	k = (i - 1) / 2;
		for (j = k + 1 ; j < i ; j++)
		{
			_putchar(str[j]);
		}
	_putchar('\n');
}
