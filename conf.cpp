#include<bits/stdc++.h>
using namespace std;
int main() {
    int j = 1;
    int arr[1001];
    for(int i=1; i<=1666; i++) {
        if(i%3 != 0 && i % 10 != 3) {
            arr[j] = i;
            j = j+ 1;
        }
    }
    int t;
    cin>>t;
    int k;
    while(t--) {
        cin>>k;
        cout<<arr[k]<<endl;
    }
}