#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Start here
*Random generated numbers, check if positive, zero or negative. Not sure what I am doing here. Need to review.
*Return: value 0 (Accept)
**/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
