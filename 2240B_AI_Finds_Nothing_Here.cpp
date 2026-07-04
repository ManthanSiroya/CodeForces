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
        ll n, m, r, c, i;
        cin >> n >> m >> r >> c;
        ll ans = ((r - 1) * m) + ((c - 1) * n) - ((r - 1) * (c - 1));
        ll ans1 = 1, a = 2;
        while (ans)
        {
            if (ans%2)
                ans1 = (ans1 * a) % 998244353;
            a = (a*a) % 998244353;
            ans /= 2;
        }
        cout << (ans1) << endl;
    }
    return 0;
}