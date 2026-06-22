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
        ll n, i, m = LLONG_MAX, ans = 0;
        cin >> n;
        vector<ll> v(n);
        for (i = 0; i < n; i++)
            cin >> v[i];
        for (i = 0; i < n; i++)
        {
            if (m > v[i])
                m = v[i];
            ans += m;
        }
        cout << ans << endl;
    }
    return 0;
}