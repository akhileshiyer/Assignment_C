#include<stdio.h>
#include<stdlib.h>

unsigned char is_negative(int number);
void conv_to_bin (int number, unsigned int res[]);
void disp_res (unsigned int arr[]);

int main()
{
	printf("-------");
	int number;
	unsigned int arr[32];

  	printf("Enter an integer : \n");

  	scanf("%d", &number);
	printf("Input Number : %d\n", number);
	
 	conv_to_bin(number, arr);
 
	disp_res(arr);
  	return 0;
}

unsigned char is_negative(int number)
{
	return (number >= 0 )? 0 : 1;

}

void conv_to_bin (int number, unsigned int res[])
{
	int i;
	char isNeg=is_negative(number);
	
	if(isNeg == 1)
	{
		number = number * -1;
	}

	for(i=0;number>0;i++)    
	{
		res[i]=number%2;    
		number=number/2;
		printf("%d\n",res[i]);
	}
	printf("Arrays added: %d\n",i);

	for (int j = i; j<32; j++){
		if(isNeg == 1)
		{
			res[j]=1;
		}
		else
		{
			res[j]=0;
		}
	}

}

void disp_res(unsigned int arr[])
{	
	int i=32;
	for(i=i-1;i>=0;i--)    
	{    
		printf("%d",arr[i]);    
	}
	printf("\n");

}
