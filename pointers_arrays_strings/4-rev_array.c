#include "main.h"

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < j / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
