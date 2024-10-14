#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int read_lower_limit(void)
{
	int ll;

	printf("Enter a lower limit: ");
	scanf("%d", &ll);

	return ll;
}

int read_upper_limit(void)
{
	int ul;

	printf("Enter an upper limit: ");
	scanf("%d", &ul);

	return ul;
}

int main (void)
{
	int l = read_lower_limit();
	int u = read_upper_limit();
	srand(time(0));

	int limited_random = (rand() % (u - l + 1)) + l;

	printf("%d\n", limited_random);

	printf("Normal exit.");
	return 0;
}