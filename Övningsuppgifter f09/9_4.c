 #include <stdio.h>

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
	courseDates x;
	printf("Start date:\n");
	x.startDate = getDate();

	printf("\nEnd date:\n");
	x.endDate = getDate();

	printf("\nAverage grade: ");
	scanf("%lf", &x.avgGrade);

	printf("Students amount: ");
	scanf("%d", &x.studentsAmount);

	printf("\nThe course starts: %02d%02d%02d\n", x.startDate.year, x.startDate.month, x.startDate.day);

	printf("The course ends: %02d%02d%02d\n", x.endDate.year, x.endDate.month, x.endDate.day);

	printf("Average grade: %.2lf\n", x.avgGrade);
	
	printf("Students amount: %d\n", x.studentsAmount);

	printf("\nNormal exit.");
	return 0;
}