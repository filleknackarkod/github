#include <stdio.h>

void swap(int *n, int *m)
{
	int k = *m;
	*m = *n;
	*n = k;
}

int main(void)
{
	int a = 4;
	int b = 6;

	swap(&a, &b);

	printf("a = %d b = %d", a, b);

	printf("\nNormal exit.");
	return 0;
}