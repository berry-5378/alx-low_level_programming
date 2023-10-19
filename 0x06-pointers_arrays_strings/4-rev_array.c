/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, b;

for (i = 0 ; i < n-- ; i++)
{
	b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
