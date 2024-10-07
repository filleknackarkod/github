/*Felix Loberg tfy24flg*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
printf("Your shopping assistant \n ");

/*Valutakurs*/
float rate = 1.00;

/*Alternativ 1-3*/
int n;

/*Pris*/
float price;

/*Summa av priser*/
float sumprice = 0;

/*Variabeln visar om programmet ska avslutas*/
bool exit = false;
while (exit == false)
{
	/*Skriver ut alternativen*/
	printf("\n1. Set exchange rate in SEK (current rate: %.2f)\n", rate);
	printf("2. Read prices in the foreign currency\n");
	printf("3. End\n \n");

	/*Låter användare välja alternativ*/
	printf("Enter your choice (1 - 3): ");
	scanf("%d", &n);
	printf("\n");

	switch (n)
	{
		case 1:
			printf("Enter exchange rate: ");
			scanf("%f", &rate);
		break;
		
		
		case 2:
			while (price >= 0)
			{
				printf("Enter price (finish with < 0): ");
				scanf("%f", &price);

				/*Summera priserna*/
				sumprice = sumprice + price;
			}
			/*Exkluderar inputen som används för att avsluta loopen*/
			sumprice = sumprice - price;

			/*Summerar priset med 2 decimaler*/
			printf("\nSum in foreign currency: %.2f\n", sumprice);

			/*Summerar priset omvandlat till SEK med 2 decimaler*/
			float sumsek = sumprice * rate;
			printf("Sum in SEK: %.2f\n", sumsek);
		break;
		
		
		case 3:
			/*Avslutar programmet*/
			exit = true;
			printf("End of program!\n \n");
		break;

		default:
			printf("Not a valid choice!\n");
		break;
	}
}


return 0;

}