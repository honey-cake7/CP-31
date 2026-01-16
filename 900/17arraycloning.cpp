#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vin(vector<int>& a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void vout(vector<int>& a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    int opr = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int mx = 0;
    for(auto it:mp) {
        mx = max(it.second,mx); // find max freq of elements in array
    }
    while(mx < n) {
        opr++; // for cloning
        if(mx*2 <=  n) { //
            opr += mx; // opr to swap mx elements
            mx *= 2; // doubling them as we have 2*x now cloning
        }
        else {
            opr += n - mx; // if more are there then only nevessary will be added
            mx = n; 
        }

    }
    

    
    cout << opr << endl;
    
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