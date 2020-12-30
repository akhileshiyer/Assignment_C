#include<stdio.h>
#include <limits.h>

int main()
{
	int n, input[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (int i = 0; i < n; ++i)
	{
            scanf("%d", &input[i]);
 	}

	int large1=0, large2=0, small1=	INT_MAX,small2=INT_MAX;
        for (int i = 0; i < n; ++i)
        {
		
		if (input[i] > large1)
		{
			large2=large1;
			large1=input[i];
		}
		else if(input[i] > large2)
		{
			large2=input[i];
		}

		if (input[i] < small1)
		{
			small2 = small1;
			small1 = input[i];
		}
		else if (input[i] < small2)
		{
			small2=input[i];
		}
	}

	printf("Largest : %d, Smallest : %d\n",large1, small1);
	printf("Second Largest : %d, Second Smallest : %d\n",large2, small2);
	return 0;
}
