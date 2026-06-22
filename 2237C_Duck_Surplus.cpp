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
        ll n, i, m = 0;
        cin >> n;
        vector<ll> v(n);
        for (i = 0; i < n; i++)
            cin >> v[i];
        for (i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
                v[i + 1] = v[i] + v[i + 1];
        }
        for (i = 0; i < n; i++)
            m = max(m, v[i]);
        cout << m << endl;
    }
    return 0;
}