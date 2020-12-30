#include<stdio.h>

/* program that calculates the sum of every third integer, beginning with 2 and ending at a value less than or equal to 100 */
int main(void)
{
	int i=2;
	int sum =0;
  	
	while (i<=100)
	{
 		sum= sum+i;
		i=i+3;
	}

	printf("sum = %d", sum);
}
