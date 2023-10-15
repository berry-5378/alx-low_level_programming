#include<stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
uint64_t t1 = 1, t2 = 2, s;
	int i;

	printf("%"PRIu64 ", ", t1);
	printf("%"PRIu64 ", ", t2);
	for (i = 3 ; i <= 98 ; i++)
	{
		s = t1 + t2;
		printf("%"PRIu64 "", s);
		if (i != 98)
		{
			printf(", ");
		}
		t1 = t2;
		t2 = s;
	}
	printf("\n");
	return (0);
}
