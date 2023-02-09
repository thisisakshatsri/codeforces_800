#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    cout << fixed << setprecision(10);
    for(int i=0; i<n; i++)
        cin>>v[i];
    long long int s=0;
    int mx = v[0];
    for(int i=0; i<n; i++) {
        if(v[i] > mx) mx = v[i];
        s += v[i];
    }
    cout<<1.0*(s - mx) / (n - 1) + mx<<"\n";
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