#include <stdio.h>

double f_read_number(void)
{
	double n;
	printf("Enter a number: ");
	scanf("%lf", &n);
	return n;
}

double largest(double l[])
{
	double ln;
	
	for(int k = 0; k < 4; k++)
	{
		if (l[k] <= l[k+1] && l[k+1] >= ln)
		{
			ln = l[k+1];
		}
	}

	return ln;
}

double smallest(double l[])
{
	double sn;
	
	for(int k = 0; k < 4; k++)
	{
		if (l[k] >= l[k+1] && l[k+1] <= sn)
		{
			sn = l[k+1];
		}
	}

	return sn;
}

int main(void)
{
	double a[5];

	for(int i = 0; i < 5; i++)
	{
		a[i] = f_read_number();
	}

	for(int o = 0; o < 5; o++)
	{
		printf("%.2lf ", a[o]);
	}

	double bn = largest(a);

	
	printf("\nThe largest number is: %.2lf\n", bn);
	printf("The smallest number is: %.2lf\n", smallest(a));
	printf("The amount of numbers is 5\n");

	printf("Normal exit.");
	return 0;
}