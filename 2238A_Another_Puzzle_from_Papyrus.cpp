#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
 
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
 
        ll notr = 0;
        bool pnotr = true;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                pnotr = false;
                break;
            }
            notr += (a[i] - b[i]);
        }
        vector<ll> sa = a, sb = b;
        sort(sa.begin(), sa.end(), greater<ll>());
        sort(sb.begin(), sb.end(), greater<ll>());
        ll r = c;
        bool pr = true;
        for (ll i = 0; i < n; i++)
        {
            if (sa[i] < sb[i])
            {
                pr = false;
                break;
            }
            r += (sa[i] - sb[i]);
        }
        ll ans = LLONG_MAX;
        if (pnotr)
            ans = min(ans, notr);
        if (pr)
            ans = min(ans, r);
 
        if (ans == LLONG_MAX)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
 
    return 0;
}