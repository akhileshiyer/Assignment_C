#include<stdio.h>

int main()
{
	int a = 1;

	printf("%d, %d, %d\n",a, ~a,a ^ (1<<0));

	a =0 ;

	printf("%d, %d, %d\n",a, ~a,a ^ (1<<0));
}
