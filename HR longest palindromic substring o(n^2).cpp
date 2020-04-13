#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
bool is_palindrome(string s)
{
	string rev=s;
	reverse(rev.begin(),rev.end());
	return s==rev;
}

string longestsubstr(string s){
	  int best_len=0;
	  string best_str="";
	  int n=s.length();
	  for(int i=0;i<n;i++)
	  {
		  for(int j=i;j<n;j++)
		  {
			  int len=j-i+1;
			  string subs=s.substr(i,len);
			  if(is_palindrome(subs) && len>best_len)
			  {
				  best_len=len;
				  best_str=subs;
			  }
		  }
	  }
	  cout<<"the length of longest palindromic substring is: "<<best_len<<endl;
	  return best_str;
	}

int main() {
	// your code goes here
	string s;
	cin>>s;
	string str=longestsubstr(s);
	cout<<str;
	return 0;
}
