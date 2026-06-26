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
        ll n, k, i;
        cin >> n >> k;
        ll a = 0, b = 0, ans1 = 0, ans2 = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a == k)
                ans1 = 1;
            if (b == k)
                ans2 = 1;
        }
        if (ans1 && ans2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}