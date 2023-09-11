#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number and prints whether it is positiv, negative or zero
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
	{
		printf("negative\n")
	}
	else if (n < 0) 
	{
		printf("negative\n")
	}
	else 
	{
		printf("zero\n");
	}

	return (0)
}
