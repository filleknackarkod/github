#include <stdio.h>

double avg(int n1, int n2, int n3)
{
	int n[] = {n1, n2, n3};
	double n_sum = 0;
	for (int i = 0; i < 3; i++)
	{
		n_sum += n[i];
	}
	double avg = n_sum / 3;

	return avg;
}

int read_number(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	return n;

}

int main(void)
{
	int n1 = read_number();
	int n2 = read_number();
	int n3 = read_number();

	printf("The average is: %.2lf", avg(n1, n2, n3));

}