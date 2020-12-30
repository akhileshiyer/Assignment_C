#include<stdio.h>

int main()
{
	
	int arr[100],p,c,n,delet,v;
	
	printf("enter the number of elements in an array : ");
	scanf("%d",&n);

	printf("enter the elements of an array");
	for(c=0;c<n:c++)
	{

		scanf("%d", &arr[c]);
	}
	if(delet)
	{
	 	printf("enter the location where you want to delete element from : ");
		scanf("%d",&p);

		if(p>=n+1)
		{
			printf();
		}
		else
		{
			for(c=p-1;c<n-1;c++)
			arr[c]=arr[c+1];
		}
			printf("resultant array is: ");
	
			for(c=0;c<n-1;c++)
			{
				printf("%d",arr[c]);
			}
	}
	else
	{
		printf("enter the location where you want to insert a element :");
		scanf("%d",&p);
		
		printf("enter the value to enter: ");
		scanf("%d",v);
		
		for(c=n-1;c>=p-1;c--)
		
			arr[c+1]=arr[c];
		
		arr[p-1]=v;
	
		printf("resultant array\n");

			for(c=0;c<=n;c++)
			{
			printf("%d",arr[c]);
			}
	}
	return 0;
	
}
