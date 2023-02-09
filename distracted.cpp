#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag = 0;
    int arr[26] = {0};
    for(int i=0; i<n; i++) {
        arr[s[i] - 'A']++;
        if(arr[s[i]-'A'] > 1 && s[i-1] != s[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"YES"<<endl;
    }
    else 
        cout<<"NO"<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}