#include <stdio.h>

int main(void)
{
	int t1[] = {1, 5, 7, 9, 12};
	int t2[] = {4, 9, 16, 25, 36};
	int res[5];
	int sumres;
	for (int i = 0; i < 5; i++)
	{
		res[i] = t1[i] * t2[i];
	}

	for(int k = 0; k < 5; k++)
	{
		sumres += res[k];
	}

	printf("%d", sumres);

	printf("\nNormal exit.");
	return 0;
}