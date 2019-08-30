//cube by for.


#include<stdio.h>
void main()
{
	int i,x,cube;
	printf("enter the number: ");
	scanf("%d",&x);
	printf("the cube of the numbers:\n");
	for(i=1;i<=x;i++)
	{
		cube=i*i*i;
		printf("%d \n",cube);
	}
	
}
