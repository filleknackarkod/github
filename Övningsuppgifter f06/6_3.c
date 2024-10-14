#include <stdio.h>

int main(void)
{
	int n[10];
	for(int m = 0; m < 10; m++)
	{
		n[m] = m + 5;
	}
	
	for (int i = 0; i < 10; i++) 
	{
		printf("The element at index %d in the array contains the value %d\n", i, n[i]);
	}

	printf("\nNormal exit.");
	return 0;
}