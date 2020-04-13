#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s1[60],s2[60];
    cin>>s1;
    cin>>s2;
    int n=strlen(s1);
    int m=strlen(s2);
    int k=(n>m)?n:m;
    char sum[k];
    int carry=0; 
    int i=n-1,j=m-1;
    sum[k]='\0';
    k--;
    int s;
	while(i>=0 &&j>=0)
        {
		 s=(s1[i]-48)+(s2[j]-48)+carry;
		   sum[k]=s%10+48;
		   carry=s/10;
		   i--;
	       j--;
	       k--;  
        }
        if(i>=0)
        {
			while(i>=0)
			{
				s=(s1[i]-48)+carry;
				sum[k]=s%10+48;
				carry=s/10;
				i--;
				k--;
			}
		}
		else if(j>=0)
		{
			while(j>=0)
			{
				s=(s1[j]-48)+carry;
				sum[k]=s%10+48;
				carry=s/10;
				j--;
				k--;
			}
		}
		if(carry>0)
		{
			for(i=strlen(sum);i>=0;i--)
			{
				sum[i+1]=sum[i];
			}
				sum[0]=carry+48;
		}
			
    
    cout<<sum;
	
    return 0;
}
