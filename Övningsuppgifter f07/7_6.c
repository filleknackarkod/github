#include <stdio.h>

void order(int *small, int *medium, int *large)
{
	int s = *small;
	int m = *medium;


	
	while (!(*small <= *medium && *medium <= *large && *small <= *large))
	{
		if (!(*small <= *large))
		{
			s = *small;

			*small = *large;
			*large = s;
			
		}
		if (!(*small <= *medium))
		{
			s = *small;

			*small = *medium;
			*medium = s;
		}
		if(!(*medium <= *large))
		{
			m = *medium;
			
			*medium = *large;
			*large = m;
		}
	}
}

int main(void)
{
	printf("Enter 3 numbers: \n");
	int num[3];

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &num[i]);
	}

	printf("The numbers are: %d %d %d\n", num[0], num[1], num[2]);
	order(&num[0], &num[1], &num[2]);
	printf("In order, the number: %d %d %d\n", num[0], num[1], num[2]);

	printf("\nNormal exit.");
	return 0;
}