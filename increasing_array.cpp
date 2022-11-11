#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	vector<long long int> arr(n);
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	long long int count = 0;
	bool flag = true;
	while(flag) {
		flag = false;
		for (int i = 1; i < n; i++) {
			if (arr[i] < arr[i-1]) {
				count += arr[i-1] - arr[i];
				arr[i] += arr[i-1] - arr[i];
				flag = true;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
