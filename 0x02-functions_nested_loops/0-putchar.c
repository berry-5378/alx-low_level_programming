#include"main.h"
/**
 * main - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 */
int main(void)
{
char b[] = "_putchar";
int i;
for (i = 0; i < 9; i++)
{
	_putchar(b[i]);
}
_putchar('\n');
return (0);
}
