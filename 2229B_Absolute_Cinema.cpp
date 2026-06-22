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
        ll n, i, sum = 0, x = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        for (i = 0; i < n; i++)
        {
            sum += max(a[i], b[i]);
            x = max(x, min(a[i], b[i]));
        }
        cout << (sum + x) << endl;
    }
    return 0;
}