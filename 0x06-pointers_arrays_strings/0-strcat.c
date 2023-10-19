#include"main.h"
/**
 * *_strcat - Prototype
 * Return: On success
 * @dest: function parameter
 * @src: function parameter
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k = -1;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;

	do
	{
		k++;
		dest[i] = src[k];
		i++;
	}
	while (src[k] != 0);
	return (dest);
}
