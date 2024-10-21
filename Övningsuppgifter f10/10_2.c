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
	for (int i = 1; i <= 6; i++)
	{
		printf("sum(%d) = %d\n", i, sum(i));
	}

	printf("\nNormal exit.");
	return 0;
}