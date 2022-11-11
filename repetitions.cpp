#include <iostream>
#include <string>
using namespace std;
 
int main() {
	string str;
	getline(cin, str);
	int n = str.size();
	int count = 0;
	int max = 0;
	char temp = str[0];
	for (int i = 0; i < n; i++) {
		if (temp == str[i]) {
			count++;
			if (max < count) {			
				max = count;
			}
		} else {
			if (max < count) {			
				max = count;
			}
			count = 1;
			temp = str[i];
		}
	}	
	cout<<max<<endl;
	return 0;
}
