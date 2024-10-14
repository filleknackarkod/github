#include <stdio.h>

int main(void)
{

int i = 0;
int n;

printf("Antal varv: ");
scanf("%d", &n);

while (i < n)
{
printf("%d ", i);
i++;
}

printf("\nNormal exit.");
return 0;
}