#include"main.h"
/**
 * print_sign - Prints the sign of a number
 * Return: Returns 1,0,-1
 * @n: function parameter
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
return (1);
}
else if (n == 0)
{
	_putchar('0');
return (0);
}
else
{
	_putchar('-');
return (-1);
}
}
