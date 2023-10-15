#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int t1 = 1, t2 = 2, s;
	int i;

	printf("%lu, %lu, ", t1, t2);
	for (i = 3 ; i <= 50 ; i++)
	{
		s = (t1 + t2);
		printf("%lu", s);
		if (i != 50)
		{
			printf(", ");
		}
		t1 = t2;
		t2 = s;
	}
	printf("\n");
	return (0);
}
