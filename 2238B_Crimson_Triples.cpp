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
        ll ans = 0;
        for (i = 1; i <= n; i++)
        {
            ans += (n / i) * (n / i);
        }
        cout << ans << endl;
    }
    return 0;
}