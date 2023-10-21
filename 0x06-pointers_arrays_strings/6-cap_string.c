#include"main.h"
/**
 * *cap_string - Prototype
 * Return: On success
 * @n: function parameter
 */
char *cap_string(char *n)
{
	int in = 0;

	while (n[in])
	{
		while (!(n[in] >= 'a' && n[in] <= 'z'))
			in++;

		if (n[in - 1] == ' ' ||
				n[in - 1] == '\t' ||
				n[in - 1] == '\n' ||
				n[in - 1] == ',' ||
				n[in - 1] == ';' ||
				n[in - 1] == '.' ||
				n[in - 1] == '!' ||
				n[in - 1] == '?' ||
				n[in - 1] == '"' ||
				n[in - 1] == '(' ||
				n[in - 1] == ')' ||
				n[in - 1] == '{' ||
				n[in - 1] == '}' || in == 0)
			n[in] -= 32;
		in++;
	}
	return (n);
}
