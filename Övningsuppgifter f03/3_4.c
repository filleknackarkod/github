#include <stdio.h>

int main(void)
{
int n;

printf("Amount of laps for loop to run: ");
scanf("%d", &n);

for (int i = 1 ; i <= n ; i++) 
{

printf("%d ", i);

}

printf("\nNormal exit.\n");
return 0;

}