#include<stdio.h>

//#include<process.h>
#include<stdlib.h>

//#define MAX 6

int top=-1, stack[100],x,i,n;
void push(void);
void pop(void);
void display(void);

int main()
{
	int ch;
		printf("enter the size of stack");
		scanf("%d",&n);
	
	do
	{
	   printf("enter your choice to push(0),pop(1),display(2):");
	   scanf("%d",&ch);
	

		switch(ch)
		{
			case 1:{push();
				break;
				}

			case 2:{pop();
				break;
				}
			case 3:{display();
				break;
				}
			default:{
				printf("\n invalid choice");
				}
		}	
	}
	while(ch!=4);
	return 0;
}

	void push()
	
	{
		
		if(top>=n-1)
		{
			printf("Oerflow\n");
		}
		else
		{
			printf("enter an element to push:");
			scanf("%d",&x);
			top++;
			stack[top] =x;
		}
	
	}

	void pop()
	{
		
		if(top<=-1)
		{
			printf("underflow\n");
			
		}
		else
		{
			printf("delete element %d",stack[top]);
			top--;
		}
	}

	void display()
	{
		int i;
		if(top>=0)
		{
			printf("stack is \n");
			for(i=top;i>=0;i--)
				printf("%d",stack[i]);
		}
		else
		{
			printf("stack is empty\n");
			
		}
	}

