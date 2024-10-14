#include <stdio.h>

double f_read_number(void)
{
	double n;
	scanf("%lf", &n);
	return n;

}

int main(void)
{
	printf("Pick a value for n1: ");
	double n1 = f_read_number();
	printf("\n");

	printf("Pick a value for n2: ");
	double n2 = f_read_number();
	printf("\n");

	double add = n1 + n2;
	double sub = n1 - n2;
	double multi = n1 * n2;
	double div = n1 / n2;

	printf("The results are: \n");
	printf("n1 + n2 = %lf", add);
	printf("\nn1 - n2 = %lf", sub);
	printf("\nn1 * n2 = %lf", multi);
	printf("\nn1 / n2 = %lf", div);


	printf("\nNormal exit\n");
	return 0;
}