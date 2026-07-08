#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ans = 0;
        ll cnt = 1;
        while (cnt <= n)
        {
            ll a = min(k, n / cnt);
            ans += a;
            n -= a * cnt;
            cnt <<= 1;
        }
        cout << ans << "\n";
    }
 
    return 0;
}