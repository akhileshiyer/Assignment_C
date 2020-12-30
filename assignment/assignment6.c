#include<stdio.h>
#include<stdlib.h>

unsigned char is_negative(int number);
void conv_to_bin (int number, unsigned int res[]);
void disp_res (unsigned int arr[]);

int main()
{
	printf("-------");
	int number,index;
	unsigned int arr[10];
	
  	printf("Enter an integer : \n");

  	scanf("%d", &number);

	printf("Enter the index : \n");
	scanf("%d",&index);

	printf("Input Number : %d, Index : %d\n", number, index);
	
	int i,j;

        if(number < 0)
        {
                number = number * -1;
        }
	
        for(i=0;number>0;i++)
        {
		int bit = number%2;
		//printf("%d, %d\n",i,bit);
		
		if (i == index)
		{
			arr[i] = bit ^ (1<<0);		
		}
		else
		{
			arr[i] = bit;
		}
                number=number/2;
        }

	for(i=i-1;i>=0;i--)
        {   
                printf("%d",arr[i]);
        }
        printf("\n");
  	
	return 0;
}

