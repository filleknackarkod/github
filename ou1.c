/*Shopping assistant
Felix Loberg tfy24flg
A program that lets user calculate a sum of prices of a foreign currency
and convert it to a designated currency
2024-10-10*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
printf("Your shopping assistant \n ");

/*Currency rate*/
float rate = 1.00;

/*Alternative 1-3*/
int alt;

/*Price*/
float price = 0;

/*Sum of prices*/
float sumprice = 0;

/*If true, runs program. If false, exits program*/
bool loop = true;

while (loop)
{
	/*Prints the menu*/
	printf("\n1. Set exchange rate in SEK (current rate: %.2f)\n", rate);
	printf("2. Read prices in the foreign currency\n");
	printf("3. End\n \n");

	/*Lets the user make a choice*/
	printf("Enter your choice (1 - 3): ");
	scanf("%d", &alt);
	printf("\n");

	switch (alt)
	{
		/*Changes currency rate*/
		case 1:
			printf("Enter exchange rate: ");
			scanf("%f", &rate);
		break;
		
		
		/*Function for summing prices and converting currency*/
		case 2:
			while (price >= 0)
			{
				printf("Enter price (finish with < 0): ");
				scanf("%f", &price);

				/*Sums prices unless user finishes*/
				if (price >= 0)
				{
					sumprice += price;
				}
			}

			/*Prints results*/
			printf("\nSum in foreign currency: %.2f\n", sumprice);
			printf("Sum in SEK: %.2f\n", sumprice * rate);

			/*Resets price and sum of prices*/
			price = 0;
			sumprice = 0;
		break;
		
		/*Exits the program*/
		case 3:
			loop = false;
			printf("End of program!\n \n");
		break;

		default:
			printf("Not a valid choice!\n");
		break;
	}
}


return 0;

}