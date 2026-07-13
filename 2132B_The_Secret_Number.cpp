#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    vector<ll> v(19);
    v[0] = 1;
    for (int i = 1; i <= 18; i++)
        v[i] = v[i - 1] * 10LL;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> ans;
        for (int k = 1; k <= 18; k++) {
            ll d = v[k] + 1;
            if (d > n) break;
 
            if (n % d == 0)
                ans.push_back(n / d);
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        if (!ans.empty()) {
            for (ll x : ans)
                cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}