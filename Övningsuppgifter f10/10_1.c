#include <stdio.h>

int sum(int n)
{
	if (n == 1)
	{
		return n;
	}
	else
	{
		return sum(n - 1) + n;
	}
}

int main(void)
{
	int n;
	
	printf("Enter a positive integer: ");
	scanf("%d", &n);

	printf("The sum of the %d first integers is: %d", n, sum(n));

	printf("\nNormal exit.");
	return 0;
}