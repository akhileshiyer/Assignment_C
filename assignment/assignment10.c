#include<stdio.h>


int main(void)
{

	int n=13;

	printf("Enter an odd number to generate the pattern:");
	scanf("%d",&n);
	
	int before=(n-1)/2, after=(n-1)/2, star=1;
	
	for(int i=1;i<=n;i++)
	{
	//	printf("%d, %d, %d, %d - ",i,before, star, after);
		for(int j=1;j<=before;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=star;k++)
		{
			printf("*");
		}
		for(int l=1; l<=after; l++){
			printf(" ");
		}
		printf("\n");

		if(before == 0 && after == 0)
                {
                        before = 1;
                        after = 1;
                        star = (n-2);
                }
		else if (i > ((n-1)/2))
		{
			before++;
			star = star - 2;
			after++;

		}
		else	
		{
			before--;
			star = star + 2;
			after--;
		}
	}

	return 0;
}
