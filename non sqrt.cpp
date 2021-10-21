#include <iostream>
#include <math.h>
using namespace std;

bool nonSquared(int num) {
	return floor(sqrt(num)) * floor(sqrt(num)) == num;
}
//2, 3, 5, 6, 7, 8, 10, 11, 12, 13
int NthNonSquared(int n) {
	int cnt = 0;
	int i = 1;
	while(true) {
		if(!nonSquared(i)) {
			cnt++;
		}
		if(cnt == n) break;
		i++;
	}
	// cout<<i<<endl;
	return i;
}

int NthNonSquared1(int n) {
	return (n + ceil(sqrt(n) - 0.5));
	//2 + 2 -> 4 
	//3 + floor(0.5 + 1.7) => 2 + 1 => 3 
}
//2 3 5 6 7 8 10 11 12
int main() {
	// your code goes here
	for(int i = 1; i <= 1000; i++) {
		if(NthNonSquared(i) != NthNonSquared1(i)) {
			cout<<"Mismatch "<<i<<endl;
		}
	}
	cout<<sqrt(3)<<endl;
	return 0;
}
