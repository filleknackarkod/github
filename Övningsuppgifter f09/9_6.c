#include <stdio.h>
#define MAX 2

typedef struct date
{
	int year;
	int month;
	int day;
} 
date;

typedef struct courseDates 
{
	date startDate;
	date endDate;
	double avgGrade;
	int studentsAmount;
}
courseDates;

date getDate(void)
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
	courseDates x[MAX];

	for (int i = 0; i < MAX; i++)
	{
		printf("\n---Course %d---\n", (i + 1));

		printf("Start date:\n");
		x[i].startDate = getDate();

		printf("\nEnd date:\n");
		x[i].endDate = getDate();

		printf("\nAverage grade: ");
		scanf("%lf", &x[i].avgGrade);

		printf("Students amount: ");
		scanf("%d", &x[i].studentsAmount);
	}

	if(x[0].startDate.month > 6)
	{
		printf("\n---Fall semester %d---", x[0].startDate.year);
	}
	else
	{
		printf("\n---Spring semester %d---", x[0].startDate.year);
	}

	for (int i = 0; i < MAX; i++)
	{
		
		printf("\nThe course starts: %04d%02d%02d\n", x[i].startDate.year, x[i].startDate.month, x[i].startDate.day);

		printf("The course ends: %04d%02d%02d\n", x[i].endDate.year, x[i].endDate.month, x[i].endDate.day);

		printf("Average grade: %.2lf\n", x[i].avgGrade);
		
		printf("Students amount: %d\n", x[i].studentsAmount);
	}

	printf("\nNormal exit.");
	return 0;
}