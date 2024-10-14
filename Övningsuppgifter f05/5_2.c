#include <stdio.h>



double f_add(a, b)
{
	double sum = a + b;
	return sum;
}

int main(void)
{
	int n1 = 123;
	int n2 = 456;
	double result;
	result = f_add(n1, n2);
	printf("The sum is %d\n", result);
	
	printf("Normal exit.");
	return 0;
}