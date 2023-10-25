#include"main.h"
/**
 * *leet - Prototype
 * Return: On success
 * @n: function parameter
 */
char *leet(char *n)
{
	char leet_char[] = "43071";
		char *normal_char = "aeotl";
		int num_char = 5;
	int i, j = 0;

	while (n[j] != '\0')
	{
		for (i = 0 ; i < num_char ; i++)
		{
			if (n[j] == normal_char[i] || n[j] == normal_char[i] - 32)
			{
				n[j] = leet_char[i];
			}
		}
		j++;
	}
	return (n);
}
