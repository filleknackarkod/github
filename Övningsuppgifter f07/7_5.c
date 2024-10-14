#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	bool incorrect = true;
	int number = rand() % 100;
	int guess;
	while (incorrect)
	{
		printf("Guess the number (1-100): ");
		scanf("%d", &guess);

		if (guess < number)
		{
			printf("Too low!\n");
		}
		else if (guess > number)
		{
			printf("Too high!\n");
		}
		else
		{
			printf("Correct!\n");
			incorrect = false;
		}
	}

	printf("\nNormal exit.");
	return 0;
}