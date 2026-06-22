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
        ll n, m, i, ans = 0;
        cin >> n >> m;
        vector<ll> v(n);
        map<ll, ll> freq;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[(v[i] % m)]++;
        }
        for (i = 1; i <= m / 2; i++)
        {
            if (freq[i] > 0 && freq[m - i] > 0)
            {
                ll x = min(freq[i], freq[m - i]);
                freq[i] -= x;
                freq[m - i] -= x;
                ll y = max(freq[i], freq[m - i]);
                ans++;
                if (y > 1)
                    ans += y - 1;
            }
            else if (freq[i] > 0 || freq[m - i] > 0)
                ans += max(freq[i], freq[m - i]);
        }
        ans += (freq[0] > 0);
        cout << ans << endl;
    }
    return 0;
}