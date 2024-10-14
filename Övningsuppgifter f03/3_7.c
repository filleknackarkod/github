#include <stdio.h>

int main(void)
{
int n;

printf("Calculate the sum of integers 1 to ");
scanf("%d", &n);

int sum = 0;
for (int i = 1 ; i <= n ; i++)
{
sum = sum + i;
printf("%d ", sum);
}

printf("\nThe sum is: %d", sum);

printf("\nNormal exit.");
return 0;
}