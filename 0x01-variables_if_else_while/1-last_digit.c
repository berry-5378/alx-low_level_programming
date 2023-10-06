#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0
*/
int main(void)
{
int a;
int b;
srand(time(0));
a = rand() % 100;
b = a % 10;
if (b > 5)
	printf("Last digit of %d is %d and is greater than 5", a, b);
else if (b == 0)
	printf("Last digit of %d is %d and is 0", a, b);
else if (b < 6 && b != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0", a, b);
printf("\n");
return (0);
}
