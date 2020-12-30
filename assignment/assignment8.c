//to check the given number is even |odd &positive |negative
#include<stdio.h>
#define cal sizeof(int)*8
int check(int n)
{
	return(!(n & (1 << (cal-1)) | (!n)));
}
int main(void)
{

	int number,result;

	printf("enter the number : ");
	scanf("%d",&number);

	//to check the given number is even or odd
	result=check(number);
	if(number&1)
	{
		printf("%d is the odd number", number);
	}
	else
	{
		printf("%d is the even numer", number);
	}
//        return 0;

	//to check the given number is positive or negative
	
	//result= check(number);

	if(result && number)
	{
		printf("the number is a positive number\n");
	}
	else
	if(number)
	{
		printf("the number is a  negative number\n");
	}	
	else
	{
		printf("the entered number is zero\n");
	}
	
	return 0;


}
