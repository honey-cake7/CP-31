#include <bits/stdc++.h>
using namespace std;
// its basically bubble sort 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool flag = 1;
        for (int i = 1; i < n; i++) {
            if (a[i - 1] <= a[i]) {
                flag = 1;
            }
            else {
                flag = 0;
                break;
            }
        }
        if (flag == 1 || k > 1) {
            cout << "YES" << endl;
            continue;
        }
        else cout << "NO" << endl;



    }
}

