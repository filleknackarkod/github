#include <stdio.h>
#include <stdbool.h>

bool equal(int a, int b)
{
	if ( a == b )
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(void)
{
	int t1, t2;

	printf("Pick an integer value for t1: ");
	scanf("%d", &t1);
	printf("Pick an integer value for t2: ");
	scanf("%d", &t2);

	bool truth = !equal(t1, t2);

	printf("The numbers are equal: %s", truth ? "true":"false");
}