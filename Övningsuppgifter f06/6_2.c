#include <stdio.h>

int main(void)
{
	int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	
	for (int i = 0; i < 10; i++) {
		printf("The element at index %d in the array contains the value %d\n", i, n[i]);
	}

	printf("\nNormal exit.");
	return 0;
}