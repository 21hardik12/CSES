#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    long int n;
    cin>>n;
    long int sum = 0;
    for (long int i = 1; i <= n; i++) {
        sum += i;
    }
 
    if (sum%2==0) {
        cout<<"YES"<<endl;
        long int arr[n+1];        
        int count = 0;        
        sum = sum/2;        
        for (long int i = n; i > 0; i--) {            
            if (sum <= 0) break;
 
            if (i <= sum) {
                arr[i] = 1;
                count++;
                sum = sum - i;
            }
        }
        cout<<count<<endl;
        for (long int i = 1; i < n+1; i++) {
            if (arr[i] == 1) cout<<i<<' ';
        }
        cout<<endl<<n-count<<endl;
        for (long int i = 1; i < n+1; i++) {
            if (arr[i] != 1) cout<<i<<' ';
        }
    } else {
        cout<<"NO"<<endl;
    }
}
