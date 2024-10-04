#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter an integer: ");
	scanf("%d", &n);

	printf("The value was %d.\n", n);

	n = n + 1;

	printf("The next higher value is %d.\n", n);

	printf("Normal exit.\n");
	return 0;
}
