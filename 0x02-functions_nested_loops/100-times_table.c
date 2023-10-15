#include"main.h"
#include<stdio.h>
/**
 * print_times_table - Prototype
 * Return: Returns
 * @n: function parameter
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	int i, j, k;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			k = i * j;
			printf("%3d", k);
			if (j != n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	}
}
