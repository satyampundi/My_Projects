/*Write a menu driven program which has following options:
1. Factorial of a number.
2. Prime or not
3. Odd or even
4. Exit
Make use of switch statement.
The outline of this program is given below:

main( )
{
int choice ;
while ( 1 )
{
printf ( "\n1. Factorial" ) ;
printf ( "\n2. Prime" ) ;
printf ( "\n3. Odd/Even" ) ;
printf ( "\n4. Exit" ) ;
printf ( "\nYour choice? " ) ;
scanf ( "%d", &choice ) ;
switch ( choice )
{
case 1 :
 logic for factorial of a number 
break ;
case 2 :
 logic for deciding prime number 
break ;
case 3 :
 logic for odd/even 
break ;
case 4 :
exit( ) ;
}
}
}
note:
The statement while ( 1 ) puts the entire logic in an infinite loop.
This is necessary since the menu must keep reappearing on the
screen once an item is selected and an appropriate action taken.*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int choice,m,fact=1,x,i,n,flag;
	while(1)
	{
		printf("\n1. Factorial \n2. Prime \n3. Odd/Even\n4. Exit \nyour choice?");
		scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
			printf("enter the number: ");
			scanf("%d",&m);
			for(i=1;i<=m;i++)
			{
				fact=fact*i;
			}
			printf("the factorial is: %d",fact);
			break;
		    }
		case 2:{
		    {
   int i, num, p = 0;
   printf("Please enter a number: \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("Entered number is %d "\
             "and it is a prime number.",num);
   }
   else
   {
      printf("Entered number is %d "\
             "and it is not a prime number.",num);
   }
}
			break;
		}
		case 3:{
			printf("enter a number: ");
			scanf("%d",&x);
			if(x%2==0){
				printf("even.");
			}
			else
			{
				printf("odd.");
			}
			break;
		}
		case 4:
			exit(0);
			
	}

}
return 0;
}
