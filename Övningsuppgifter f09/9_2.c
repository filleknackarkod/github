#include <stdio.h>

typedef struct date
{
	int year;
	int month;
	int day;
} 
date;

int main(void)
{
	date d1;
	
	printf("year: ");
	scanf("%d", &d1.year);

	printf("month: ");
	scanf("%d", &d1.month);
	
	printf("day: ");
	scanf("%d", &d1.day);

	printf("Date: %02d%02d%02d", d1.year, d1.month, d1.day);

	printf("\nNormal exit.\n");
	return 0;
}