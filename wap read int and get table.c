//WAP to read an integer and print its multiplication table.
#include<stdio.h>
void main()
{
	int i=1,x,mul;
	printf("enter the number: ");
	scanf("%d",&x);
	printf("the table is:\n");
	while(i<11)
	{
		mul=x*i;
		printf("%d*%d=%d \n",x,i,mul);
		i++;
	}
	
}
