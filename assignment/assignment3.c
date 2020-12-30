#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

/*
	TODO:
*/

unsigned char is_prime(unsigned int x);

int main(void)
{
	
	int counter=1,i=2;

	printf("Printing first 100 prime numbers\n");

	while(counter <= 100)
	{
        	char primeCheck = is_prime(i);
		//printf("%d\n",primeCheck);
		if(primeCheck == 1)
		{
			printf("%d\n",i);
			counter++;
 		}
		i++;
	}
	
	
}

unsigned char is_prime(unsigned int x)
{
        int i=2;

        while(i <= x/2)
        {
		//printf("%d, %d ",x,i);
                if(x % i == 0)
                {
                        return FALSE;
                }
                ++i;

        }
        return TRUE;

}
