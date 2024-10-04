#include <stdio.h>

int main(void)
{

	int s, m, h;
	printf("Antal sekunder: ");
	scanf("%d", &s);
	printf("\n");

	m = s / 60;
	h = m / 60;
	
	printf("%d\n", s);
	printf("%d:", m); printf("%2d", s % 60);
	printf("\n%d:", h); printf("%2d:", m % 60); printf("%2d", s % 60);

	return 0;
}