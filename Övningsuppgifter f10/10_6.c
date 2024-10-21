#include <stdio.h>
#define MAX 7

void printArray(int n, int arr[])
{
	/* Basfall */
	if (n == 1) {
		printf("%d ", arr[0]);
	}
	/* Rekursivt fall */
	else
	{
		printArray(n - 1, arr + 1);
		printf("%d ", arr[0]);
	}
}

int main(void)
{
	int n1[MAX] = {1,2,3,4,5,6,7};

	printArray(MAX, n1);

	printf("\nNormal exit.");
	return 0;
}