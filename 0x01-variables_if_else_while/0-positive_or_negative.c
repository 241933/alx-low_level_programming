#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		print("%d is positive\n ",);
	}
	else  if (n == 0)
	{
		printf("%d is zero\n", );
	}
	else
	{
		print("%d is nagative\n", );
	return (0);
}
