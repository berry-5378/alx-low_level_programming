#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1 = 1, n2 = 2, next;
	int s = 2;

	while (n2 <= 4000000)
	{
next = n1 + n2;
if (n2 % 2 == 0)
{
	s += n2;
}
n1 = n2;
n2 = next;
}
printf("%d", s - 2);
printf("\n");
return (0);
}
