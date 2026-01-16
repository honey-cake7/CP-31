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
    string s,t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    vector<int> frt(26,0); // frequency of elements in t
    for(int i = 0;i < m; i++)
        frt[t[i] - 'A']++;
    for(int i = n - 1;i >= 0; i--) { // move backward as we need only elements from last 
        if(frt[s[i] - 'A'] > 0) {
            frt[s[i] - 'A']--; // if exiist in back then decrease
        }
        else {
            s[i] = '.';// if not replace it with  .
        }
    }
    string ans = "";
    for(int i = 0;i < n;i++) {
        if(s[i] != '.') {
            ans += s[i]; // reconstruct which are remaining
        }
    }
    if(ans == t)  {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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