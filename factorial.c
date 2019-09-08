/*Write a program to find the factorial value of any number
entered through the keyboard.*/
#include<stdio.h>
void main()
{
	int x,fact=1,i;
	printf("Enter the number: ");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
		
	}
	printf("the factorial is %d",fact);
}
