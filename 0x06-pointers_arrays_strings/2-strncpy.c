/**
 * *_strncpy - Prototype
 * Return: On success
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
	dest[k] = '\0';
	k++;
	}
	return (dest);
}
