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
        ll n, i, j, ans = 0, z = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        for (i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                for (j = i + 1; j < n; j++)
                {
                    if (a[j] <= b[i])
                        break;
                }
                if (j == n)
                {
                    z = 1;
                    break;
                }
                for (; j > i; j--)
                {
                    swap(a[j], a[j - 1]);
                    ans++;
                }
            }
        }
        if (z)
            cout << "-1\n";
        else
            cout << ans << endl;
    }
    return 0;
}