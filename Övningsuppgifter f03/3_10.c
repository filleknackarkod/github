#include <stdio.h>

int main(void)
{

int i = 0;
int n;
float f;
float sum = 0;

printf("Amount of numbers to sum: ");
scanf("%d", &n);

while (i < n)
{

printf("Enter a floating point number: ");
scanf("%f", &f);

sum = sum + f * 10;

i++;
}
printf("%f", sum);
float sumf = sum / 10;

printf("\nThe sum is %10.6f", sumf);

printf("\nNormal exit.");
return 0;
}