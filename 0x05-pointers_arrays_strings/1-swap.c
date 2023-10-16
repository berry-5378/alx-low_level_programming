#include"main.h"
/**
 * swap_int - Prototype
 * Return: On success .
 * @a: function parameter
 * @b: function parameter
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
