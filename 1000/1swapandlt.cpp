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
    string s;
    cin >> s;
    int n = s.size();
    int c1 = 0,c0 = 0;
    for(int  i = 0; i < s.size();i++) {
        if(s[i] == '1') c1++;
        else c0++;
    }
    int t = 0;
    // count 0s and 1s

    for(int  i = 0; i < s.size();i++) {
        if(s[i]== '1' && c0 > 0  ) { // swap 1 with 0 if possible and increase length of t
            c0--;
            t++;
        } 
        else if(s[i] == '0' && c1 > 0 ) {  
            c1--;
            t++;
        }
        else { // no more pairs
            break;
        }
    }
    cout <<  n - t << endl; //  jo bhi bache hai utni cost lagegi dlt karne mein



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