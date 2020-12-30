#include<stdio.h>

int main()
{
	int arr[]={2,3,2,3,7,5,7,8,5,2};
	
	int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
	{
            scanf("%d", &number[i]);
 	}

        for (i = 0; i < n; ++i) 
        {
		for (j = i + 1; j < n; ++j)
            	{
                	if (number[i] > number[j]) 
                	{
                   		a =  number[i];
                    		number[i] = number[j];
                   		number[j] = a;
	                }
        	}
        }
 
        printf("The count of duplicates in the given array:\n");
        
	int temp = number[0];
	int count=1;
	char flg=1;
	
	for (i = 1; i < n; i++)
	{
		if (temp == number[i])
		{
			count++;
		}
		else
		{
			if(count>1)
			{
				printf("Count of %d : %d\n",temp,count);
			}
			count = 1;
			temp = number[i];
		}
	}
	if (count > 0){
		printf("Count of %d : %d\n",temp,count);
	}
	return 0;

}
