#include <stdio.h>
#define MAX 10

int linearsearch(int n, int v[], int val)
{
	for (int i = 0; i < n; i++)
	{
		if (v[i] == val)
		{
			return i;
		}
	}
	return -1;
}

int main(void)
{
	int meklubba[MAX] = {44,21,4,52,32,23,12,43,42,43};
	int sv = 12;

	printf("Index for the desired value is: %d", linearsearch(MAX, meklubba, sv));

	printf("\nNormal exit.");
	return 0;
}