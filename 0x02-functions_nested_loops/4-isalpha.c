#include"main.h"
/**
 * _isalpha - Prototype
 * @c: The character to print
 * Return: On success 1.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
return (0);
}
}
