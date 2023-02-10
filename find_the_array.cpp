#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    if(n == 1) {
        cout<<1<<endl;
    }
    else{
        int t = sqrt(n);
        cout<<ceil(sqrt(n))<<endl;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}