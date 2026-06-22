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
        ll n, i, m = -1, ans = -1;
        cin >> n;
        vector<ll> v(n);
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            m = max((v[i] + 1), m);
        }
        for (i = 0; i < n; i++)
        {
            v[i] = m - v[i];
            ans = max(ans, v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}