#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n;i++) cin >> arr[i];
        int maxi = 0;
        for (int i = 0; i < n - 1; i++) {
            int diff = arr[i + 1] - arr[i];
            maxi = max(diff, maxi);
        }
        maxi = max(maxi, arr[0]);
        maxi = max(maxi, 2 * (x - arr[n - 1]));
        cout << maxi << endl;

    }

    return 0;
}
