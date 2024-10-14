#include <stdio.h>

int main(void)
{
int s , n;

printf("Start value: ");
scanf("%d", &s);


printf("End value: ");
scanf("%d", &n);

for ( int i = s ; i <= n ; i++) 
{

printf("%d ", i);

}

printf("\nNormal exit.\n");
return 0;

}