#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: Returns
 * @n: function parameter
 */
void print_to_98(int n)
{
if (n <= 98)
	{
	int i;
		for (i = n ; i < 99 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	printf("\n");
	}
	else if (n > 98)
	{
	int i;
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	}
printf("\n");
}
