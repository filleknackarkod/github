#include <stdio.h>
#define MAX 7

void printArray(int n, int arr[])
{
	if (n != 0)
	{
		printf("%d ", arr[n - 1]);
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