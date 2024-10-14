#include <stdio.h>

int main(void)
{

printf("1. ");

for (int i = 1 ; i <= 20 ; i++)
{
	printf("%d ", i);
}

printf("\n2. ");

for (int m = 1 ; m <= 31 ; m += 2)
{
	printf("%d ", m);
}

printf("\n3. ");

for (int e = 30 ; e >= 0 ; e -=2)
{
	printf("%d ", e);
}

printf("\n4. ");
for (float a = 2 ; a < 10 ; a += 0.5)
{
	printf("%.1f ", a);
}

printf("\nNormal exit.");
return 0;
}