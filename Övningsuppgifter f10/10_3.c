#include <stdio.h>
#define MAX 7

void printArray(int n, int arr[])
{
	/* Basfall */
	if (n == 1)
	{
		printf("%d ", arr[MAX - 1]);
	}
	/* Rekursivt fall */
	else
	{
		printf("%d ", arr[MAX - n]);
		printArray(n - 1, arr);
	}
}

int main(void)
{
	int n1[MAX] = {1,2,3,4,5,6,7};

	printArray(MAX, n1);

	printf("\nNormal exit.");
	return 0;
}