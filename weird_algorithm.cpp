#include <iostream>
using namespace std;
 
void collatz(long long int n) {	
	if (n==1) {
		cout<<"1"<<endl;	
		return;
	}
	cout<<n<<" ";
	if (n%2 == 0) {
		collatz(n/2);
	} else {
		collatz(n * 3 + 1);
	}	
}
 
int main() {
	long long int n;
	cin>>n;
	collatz(n);
	return 0;
}
