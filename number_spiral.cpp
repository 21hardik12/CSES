#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int n, x, y;
	cin>>n;
	vector<long long> ans;
	for (long long i = 0; i < n; i++) {
		cin>>x>>y;
		if (x >= y) {
			if (x%2==0) ans.push_back(x*x - y + 1);
			else {
				ans.push_back((x-1)*(x-1) + y);
			}
		} else {
			if (y%2==0) {
				ans.push_back((y-1) * (y-1) + x);
			} else {
				ans.push_back(y*y - x + 1);
			}
		}
	}
 
	for (int i = 0; i < n; i++) {
		cout<<ans[i]<<endl;
	}
 
	/*long long int x, y;
	long long int ans;
	cin>>x>>y;
	if (x >= y) {
		if (x%2==0) ans=(x*x - y + 1);
		else {
			ans=((x-1)*(x-1) + y);
		}
	} else {
		if (y%2==0) {
			ans=((y-1) * (y-1) + x);
		} else {
			ans=(y*y - x + 1);
		}
	}
 
	cout<<ans;
	return 0;*/
}
