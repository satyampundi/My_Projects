#include<stdio.h>
void main()
{
	int marks;
	
	printf("enter the marks of student(out of 100): ");
	scanf("%d",&marks);
	switch(marks)
	{
		case 80:
			printf("exelent");
			break;
		case 70:
			printf("good");
			break;
		case 60:
			printf("average");
			break;
		case 50:
		    printf("below average");
		    break;	
		default:
		 printf("fail");
		 break;	
	}
}
