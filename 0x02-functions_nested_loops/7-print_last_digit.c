#include"main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * Return: Returns 1,0,-1
 * @n: function parameter
 */
int print_last_digit(int n)
{
int b = n % 10;
if (n < 0)
	b = -b;
_putchar(b + '0');
return (b);
}
