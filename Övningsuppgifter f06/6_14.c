#include <stdio.h>

void swap(int *n, int *m)
{
	int k = *m;
	*m = *n;
	*n = k;
}

void sort(int *i, int *j)
{
	if (*i > *j)
	{
		swap(i, j);
	}
}

int main(void)
{
	int a = 8;
	int b = 3;

	sort(&a, &b);
	

	printf("a = %d b = %d", a, b);

	printf("\nNormal exit.");
	return 0;
}