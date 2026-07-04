#include <bits/stdc++.h> //Problem-
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
        ll n, i;
        cin >> n;
        vector<ll> v(n);
        for (i = 0; i < n; i++)
            cin >> v[i];
 
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        ll xora = 0;
        for (i = 0; i < n; i++)
        {
            xora = xora ^ v[i];
        }
        if (xora == 0)
        {
            cout << 1 << endl;
            continue;
        }
        ll ans = 0;
        for (i = 0; i < n; i++)
        {
            if ((xora ^ v[i]) < v[i])
                ans++;
        }
        cout << ans % 998244353 << endl;
    }
    return 0;
}