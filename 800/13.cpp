#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin>>n;
    int a[n];
    vector<int> b;
    vector<int> c;
    bool flag = 0;
    int maxi = 0;
    for(int i = 0; i < n ; i++) {
        cin>>a[i];
        maxi = max(maxi,a[i]);
    }
    for(int i = 0; i < n ; i++) {
        if(a[i] == maxi)
            c.push_back(a[i]);
        else 
            b.push_back(a[i]);
    }
    if(b.size() == 0){
        cout<< -1 << endl;
    }

    else {
        cout << b.size() << " " << c.size()<<endl;
        for(auto it : b){
            cout<< it << " ";
        }
        cout<<endl;
        for(auto it : c){
            cout<< it << " ";
        }
        cout<<endl;
    }

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