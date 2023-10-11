#include"main.h"
/**
 * times_table - Prototype
 * Return: Returns 1,0,-1
 */
void times_table(void)
{
	int i, j, k;
for (i = 0 ; i <= 9 ; i++)
{
	for (j = 0 ; j <= 9 ; j++)
	{
		k = i * j;
		if (j == 0)
		{
		_putchar(k + '0');
		_putchar(',');
		_putchar(' ');
		}
		else
		{
			if (k >= 10)
	{
			_putchar(k / 10  + '0');
			_putchar(k % 10 + '0');
	if (j != 9 && k >= 10)
	{
		_putchar(',');
		}
	}
			else
			{
				_putchar(k + '0');
					if (j != 9 && k <= 10)
					{
					_putchar(',');
				_putchar(' ');
					}
			}
		}
}
_putchar('\n');
}
}
