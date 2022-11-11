#include <iostream>
using namespace std;
 
int main() {
    long int n;
    cin>>n;
    long result = 1;
    for (long int i = 1; i <= n; i++) {
        result *= 2;
        result %= 1000000007;
    }
    cout<<result<<endl;
 
    return 0;
}
