#include<stdio.h>
void main()    //WAP check vowel or consonants by do while
{
	char ch;
	printf("enter the character: ");
	scanf("%c",&ch);
	do
	{
		printf("is vowel.");
	   	
	}while(ch=='A'&&ch=='a'||ch=='e'&&ch=='E'||ch=='i'&&ch=='I'||ch=='o'&&ch=='O'||ch=='u'&&ch=='U');
}
