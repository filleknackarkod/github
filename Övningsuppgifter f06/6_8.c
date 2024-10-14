#include <stdio.h>

int main (void)
{
	int a;
	int num[10] = {0,0,0,0,0,0,0,0,0,0};

	while (a > 0)
	{
		printf("Enter an integer (0-9): ");
		scanf("%d", &a);
		num[a]++;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("The number %d was entered %d time(s)\n", i, num[i]);
	}

	printf("\n\nNormal exit.");
	return 0;
}