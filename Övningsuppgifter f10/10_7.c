#include <stdio.h>
#define MAX 8

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

void insertionSort(int nums[])
{
	int next;
	int j;
	for (int i = 1; i <= (MAX-1); i++)
	{
		next = nums[i];
		j = i - 1;

		while (j >= 0 && next < nums[j])
		{
			nums[j+1] = nums[j];

			j--;
		}

		nums[j + 1] = next;
	}
}

int main (void)
{
	int numbers[MAX];
	readNumbers(numbers);
	printArray(numbers);
	insertionSort(numbers);
	printArray(numbers);

	printf("\nNormal exit.");
	return 0;
}