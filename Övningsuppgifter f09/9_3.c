#include <stdio.h>

typedef struct date
{
	int year;
	int month;
	int day;
} 
date;

date getDate (void)
{
	date d;
	
	printf("year: ");
	scanf("%d", &d.year);

	printf("month: ");
	scanf("%d", &d.month);
	
	printf("day: ");
	scanf("%d", &d.day);

	return d;
}

int main(void)
{
	date d1 = getDate();
	
	printf("Date: %02d%02d%02d", d1.year, d1.month, d1.day);

	printf("\nNormal exit.\n");
	return 0;
}