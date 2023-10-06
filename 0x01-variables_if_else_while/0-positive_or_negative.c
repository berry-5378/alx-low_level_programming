#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a = rand() - RAND_MAX;
srand(time(NULL));
if (a > 0)
{
	printf("%d is positive\n", a);
}
else if (a == 0)
{
	printf("%d is zero\n", a);
}
else
{
	printf("%d is negative\n", a);
}
return (0);
}
