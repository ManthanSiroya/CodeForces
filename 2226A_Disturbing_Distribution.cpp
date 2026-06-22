#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > 1) ans += a[i];
        }
        if (a.back() == 1) ans++;
        cout << ans << '\n';
    }
    return 0;
}