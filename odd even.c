#include<stdio.h>  //header file
void main()  //main functions
{
	int x;
	printf("enter a number: ");
	scanf("%d",&x);
	printf("%d  is ",x);
	if(x%2==0)
	{
		
		printf(" an even number.");
	}
	else
	{
		
		printf(" an odd number.");
	}
	
}
