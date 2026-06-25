#include <bits/stdc++.h> //Problem-2224B
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
        map<ll, ll> freq;
        ll mx = 0, ans = 0, mex = 0, b = 0;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
            freq[v[i]]++;
        }
        freq[mx]--;
        v[0] = mx;
        i = 1;
        for (auto p : freq)
        {
            if (p.second == 0)
                continue;
            v[i] = p.first;
            i++;
            freq[p.first]--;
        }
        for (i = 0; i < n; i++)
        {
            if (v[i] == b)
            {
                mex++;
                b++;
            }
            if (b == mx)
            {
                mex++;
                b++;
            }
            ans += mex;
        }
        // for (i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        ans += (mx * n);
        cout << ans << endl;
    }
    return 0;
}