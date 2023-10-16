#include"main.h"
/**
 * _strlen - Prototype
 * Return: On success 1.
 * @s: function parameter
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
