#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -> assign a random number to the variable n each time it is executed
* and print the last digit of the number stored in the variable n
* Description: The last digit
* Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if  (n > 5)
{
		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
}
	else if (last == 0)
{
		printf("last digit of %d is %d and is 0\n" n, n % 10);
}
	if (n < 6 && n != 0)
{
		printf("last digit of %d is %d and is less than 6 not 0\n" n, n % 10);
}
	return (0);
}
