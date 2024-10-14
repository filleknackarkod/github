#include <stdio.h>

int main(void)
{
	int n[10];
	n[0] = 1;
	n[1] = 2;
	n[2] = 3;
	n[3] = 4;
	n[4] = 5;
	n[5] = 6;
	n[6] = 7;
	n[7] = 8;
	n[8] = 9;
	n[9] = 10;

	for (int i = 0; i < 10; i++) {
		printf("The element at index %d in the array contains the value %d\n", i, n[i]);
	}

	printf("\nNormal exit.");
	return 0;
}