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
        vector<ll> v(n), u(n);
        for (i = 0; i < n; i++)
            cin >> v[i];
        for (i = 0; i < n; i++)
            cin >> u[i];
 
        for (int i = n - 1; i > 0; i--)
        {
            v[i - 1] += max(0LL, v[i] - u[i]);
        }
        if (v[0] <= u[0])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}