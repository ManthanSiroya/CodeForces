#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        ll x = 0;
        bool ans = true;
        for (int i = 0; i < n; i++) {
            ll y = v[i] - x;
            f -= min(y * a, b);
            if (f <= 0) {
                ans = false;
                break;
            }
            x = v[i];
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }
    return 0;
}