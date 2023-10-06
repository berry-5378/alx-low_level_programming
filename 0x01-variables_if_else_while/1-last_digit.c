#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a, b;
srand(time(NULL));
a = rand() - RAND_MAX / 2;
b = a % 10;
if (b > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", a, b);
}
else if (b == 0)
{
	printf("Last digit of %d is %d and is 0\n", a, b);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", a, b);
}
return (0);
}
