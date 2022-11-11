#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    string str;
    getline(cin, str);
 
    vector<int> arr(26, 0);
 
    for (int i = 0; i < int(str.size()); i++) {
        int index = int(str[i]) - 65;
        arr[index] += 1;
    }
 
    int count_of_odd = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] % 2 != 0) count_of_odd++;
    }
 
    if (count_of_odd > 1) {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
 
    int index_of_odd = 27;    
    vector<char> result;
    for (int i = 0; i < 26; i++) {
        if (arr[i] != 0) {
            if (arr[i] % 2 == 0) {
                for (int j = 0; j < arr[i]/2; j++) {
                    result.push_back(char(i+65));
                }
            } else {
                index_of_odd = i;
            }
        }
    }
    int size_before_middle = int(result.size());
    if (index_of_odd != 27) {
        for (int i = 0; i < arr[index_of_odd]; i++) result.push_back(char(index_of_odd+65));
    }
    for (int i = size_before_middle-1; i>= 0; i--) result.push_back(result[i]);
 
    for (int i = 0; i < int(result.size()); i++) cout<<result[i];
 
 
    return 0;
}
