#include <stdio.h>

double pyrvol(double b, double h)
{
	double v = b * h / 3;
	return v;
}

int main(void)
{
	double b, h;
	printf("Enter base area: ");
	scanf("%lf", &b);
	
	printf("Enter height: ");
	scanf("%lf", &h);

	printf("\nThe volume of the pyramid is: %.2lf\n", pyrvol(b, h));

	printf("Normal exit.");
	return 0;
}