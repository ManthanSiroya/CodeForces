#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (0 <= x && x <= n) freq[x]++;
        }
        int ans = 0;
        for (int i = 0; i < k; i++) {
            if (freq[i] == 0) ans++;
        }
        cout << max(ans, freq[k]) << '\n';
    }
    return 0;
}