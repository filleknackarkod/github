#include <stdio.h>
#define MAX 10

int binarySearch(int n, int v[], int val)
{
	int left = 0;
	int right = n - 1;
	int middle;

	while (left <= right)
	{
		middle = (left + right) / 2;
		if (val == v[middle])
		{
			return middle;
		}
		else
		if (val > v[middle])
		{
			right = middle - 1;
		}
		else
		{
			left = middle + 1;
		}
	}
	return -1;
		
}

int main(void)
{
	int ord[MAX] = {17,15,14,11,9,8,7,5,3,1}; 
	int sv;

	printf("Search for number: ");
	scanf("%d", &sv);

	printf("\nIndex for number %d is %d\n", sv, binarySearch(MAX, ord, sv));

	printf("\nNormal exit.");
	return 0;
}