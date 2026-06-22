#include <bits/stdc++.h> //Problem-2060C
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
        ll n, k, i, ans = 0, x = 0;
        cin >> n >> k;
        vector<ll> v(n);
        unordered_map<ll, ll> freq;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        for (i = 0; i < n; i++)
        {
            if (freq[v[i]] > 0 && k > v[i] && freq[k - v[i]] > 0)
            {
                freq[v[i]]--;
                freq[k - v[i]]--;
                ans++;
            }
            if (freq[v[i]] == -1 && !x)
            {
                ans--;
                x = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}