#include <stdio.h>

int main(void)
{

printf(" i     i*i     i*i*i\n");
printf("===   =====   =======\n");

for (int i = 1 ; i < 4 ; i++)
{
printf("%d     %d       %d\n", i, i*i, i*i*i);
}

printf("\nNormal exit.");
return 0;
}