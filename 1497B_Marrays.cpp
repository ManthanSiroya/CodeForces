#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<long long> cnt(m, 0);
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            cnt[x % m]++;
        }
 
        long long ans = 0;
 
        if (cnt[0] > 0) {
            ans++;
        }
 
        for (int r = 1; r <= (m - 1) / 2; r++) {
            long long a = cnt[r];
            long long b = cnt[m - r];
 
            if (a == 0 && b == 0) {
                continue;
            }
 
            long long mn = min(a, b);
            long long mx = max(a, b);
 
            ans++;
 
            if (mx > mn) {
                ans += mx - mn - 1;
            }
        }
 
        if (m % 2 == 0 && cnt[m / 2] > 0) {
            ans++;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}