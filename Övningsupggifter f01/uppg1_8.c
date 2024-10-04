#include <stdio.h>

int main(void)
{

	float n1, n2;

	printf("Pick a value for n1: ");
	scanf("%f", &n1);
	printf("\n");

	printf("Pick a value for n2: ");
	scanf("%f", &n2);
	printf("\n");

	float add = n1 + n2;
	float sub = n1 - n2;
	float multi = n1 * n2;
	float div = n1 / n2;

	printf("The results are: \n");
	printf("n1 + n2 = %.1f", add);
	printf("\nn1 - n2 = %.1f", sub);
	printf("\nn1 * n2 = %.1f", multi);
	printf("\nn1 / n2 = %.1f", div);


	printf("\nNormal exit\n");
	return 0;



}