#include"main.h"
/**
 * rev_string - Prototype
 * Return: On success 1.
 * @s: function parameter
 */
void rev_string(char *s)
{
	char temp;
	int length = 0, i;

	while (s[length] != '0')
	{
		length++;
	}
	for (i = 0 ; i < length / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
