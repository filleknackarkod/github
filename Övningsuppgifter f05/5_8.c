#include <stdio.h>

int read_number(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	return n;

}

int max(int n1, int n2)
{
	if (n1 > n2)
	{
		return n1;
	}
	else if (n1 < n2)
	{
		return n2;
	}
	else
	{
		printf("The first two numbers are equal\n");
		return 0;
	}
}



int main(void)
{
	int n1 = read_number();
	int n2 = read_number();
	int n3 = read_number();

	int ln = max(max(n1, n2), n3);
	printf("The largest number is: %d\n", ln);

	printf("Normal exit.");
	return 0;
}