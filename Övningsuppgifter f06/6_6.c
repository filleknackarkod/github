#include <stdio.h>

int main(void)
{
	int t1[] = {1, 5, 7, 9, 12};
	int t2[] = {4, 9, 16, 25, 36};
	int res[5];
	for (int i = 0; i < 5; i++)
	{
		res[i] = t1[i] + t2[i];
	}

	for (int m = 0; m < 5; m++)
	{
		printf("%d ", res[m]);
	}

	return 0;
}