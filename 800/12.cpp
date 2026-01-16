#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin>>n;
    int b[n];
    for(int i = 0 ; i < n ; i++){
        cin>>b[i];
    }
    vector<int> a;
    a.push_back(b[0]);
    for(int i = 1 ; i < n ; i++){
        if(b[i - 1]<=b[i]) a.push_back(b[i]);
        else{ 
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout<<a.size();
    cout<<endl;
    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}