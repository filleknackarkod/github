#include <stdio.h>

int read_number(n)
{

	printf("Enter a number: ");
	scanf("%d", &n);
	return n;

}

int main(void)
{

	int a = read_number();
	printf("You entered number %d\n", a);
	
	printf("\nNormal exit.");
	return 0;

}