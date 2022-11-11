#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, a, b;
	int maximum = 0;
	cin>>n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		cin>>a>>b;
		v.push_back({a, 1});
		v.push_back({b, -1});
	}
	sort(v.begin(), v.end());
	int curr = 0;
	for (int i = 0; i < n*2; i++) {
		curr += v[i].second;
		maximum = max(curr, maximum);
	}
 
	cout<<maximum<<endl;
	//program logic
	return 0;
}
