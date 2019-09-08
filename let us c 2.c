/*A library charges a fine for every book returned late. For first
5 days the fine is 50 paise, for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees. If you return the book after 30
days your membership will be cancelled. Write a program to
accept the number of days the member is late to return the
book and display the fine or the appropriate message.*/
#include<stdio.h>
void main()
{
	int days;
	float fine;
	printf("enter the days the book is returned to the library: ");
	scanf(" %d",&days);
	if(days<=5)
	{
		fine=0.5;
		printf("your fine is: %f",fine);
	}
	else if(days>=6&&days<=10)
	{
		fine=1;
		printf("your fine is: %f",fine);
	}
	else if(days>10&&days<=30)
	{
		fine=5;
		printf("your fine is: %f",fine);
	}
	else if(days>30)
	{
		printf("membership cancelled!!");
	}
	
}
