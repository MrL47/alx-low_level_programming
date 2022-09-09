#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main Entry
 * Description: Assigns a random number toa variable
 * return: 0
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf(%d is a positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("d is negative\n", n);
	
	return (0);
}
