// to find the given number is of power two or not
#include<stdio.h>
int main(void)
{

	int n,temp,check=0;

	printf("enter an integer number : ");
	scanf("%d",&n);

	temp=n;
	while(temp!=1)
 	{
		if(temp%2!=0)
		{
		  check=1;
		  break;
		}
		temp=temp/2;
	}

	if(check==0)
	{
		printf("%d is the number which is the power of two",n);
	}
	else
	{
		printf("%d is not the power of two",n);
	}
	return 0;
}
