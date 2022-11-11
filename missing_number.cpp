#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	vector<long int> arr(n+1, 0);
	int t;
	for (long int i = 1; i < n; i++) {
		cin>>t;
		arr[t] = 1;
	}
	for (long int i = 1; i <= n; i++) {
		if (arr[i] == 0) {
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
