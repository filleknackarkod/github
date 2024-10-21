#include <stdio.h>
#define MAX 10

void readNumbers(int nums[])
{
	printf("Enter %d numbers: \n", MAX);

	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &nums[i]);
	}
}

void printArray(int nums[])
{
	for (int i = 0; i < MAX; i++)
	{
		printf("%d ", nums[i]);
	}

	printf("\n");
}

void mergeSort(int nums[], int n)
{
	if (n = 1)
	{
		return nums[0];
	}
	else
	{
		
		
		return mergeSort(nums, n - 1);
	}
}

int main(void)
{
	int m[MAX];

	readNumbers(m);
	printArray(m);


	
	printf("\nNormal exit.");
	return 0;
}