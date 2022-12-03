#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

set<string> ans;

void backTrack(string &str, int a, int b) {
	if (a == b) {
		ans.insert(str);
		return;
	}

	for (int i = a; i <= b; i++) {
		char temp = str[i];
		str[i] = str[a];
		str[a] = temp;

		backTrack(str, a+1, b);


		temp = str[i];
		str[i] = str[a];
		str[a] = temp;

	}
}

int main() {
	string a;
	getline(cin, a);
	sort(a.begin(), a.end());
	backTrack(a, 0, a.size()-1);
	cout<<ans.size()<<endl;
	for (auto i : ans) cout<<i<<endl;
	return 0;
}
