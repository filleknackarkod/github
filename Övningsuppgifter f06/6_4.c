#include <stdio.h>

int read_number(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	return n;
}

int main(void)
{
	int n[5];

	printf("Enter 5 numbers:\n");

	for(int i = 0; i < 5; i++)
	{
		n[i] = read_number();
	}

	for(int m = 0; m < 5; m++)
	{
		printf("%d ", n[m]);
	}

	printf("\n");

	for(int k = 4; k >= 0; k--)
	{
		printf("%d ", n[k]);
	}
}