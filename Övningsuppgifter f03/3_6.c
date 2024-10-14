#include <stdio.h>

int main(void)
{

int sum = 0;
for (int i = 1 ; i <= 10 ; i++)
{
sum = sum + i;
printf("%d ", sum);
}

printf("\nNormal exit.");
return 0;
}