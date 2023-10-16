#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - code starting and ending
 * Return: Always 0
 **/
int main(void)
{
int sum;
char c;

srand(time(0));
sum = 0;
while (sum <= 2645)
{
	c = rand() % 128;
	sum += c;
	putchar(c);
}
putchar(2772 - sum);

return (0);
}
