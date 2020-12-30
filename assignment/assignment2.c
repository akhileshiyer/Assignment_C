#include<stdio.h>
#include<string.h>
/**/

int main(void)
{
	char input[1],output[1];
	int a=0;
	printf("enter a character : \n");
	scanf("%s",input);

	printf("char: %c=%d \n",input[0],input[0]);		

	if (input[0]>=65 && input[0]<=90) 
        {
        	output[0]= input[0]+32;	

 	} 
	else if(input[0]>= 97 && input[0]<=122)
	{
		output[0]=input[0]-32;
	} 
	else 
	{
	         output[0]=input[0];
	}
	
	printf("Input : %c, Output : %c",input[0],output[0]);
	
	
	
}
