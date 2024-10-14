#include <stdio.h>



int add(a, b)
{
	int sum = a + b;
	return sum;
}

int main(void)
{
	int n1 = 123;
	int n2 = 456;
	int result;
	result = add(n1, n2);
	printf("The sum is %d\n", result);
	
	printf("Normal exit.");
	return 0;
}