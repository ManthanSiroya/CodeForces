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
        ll n, i, j;
        cin >> n;
        vector<vector<char>> v(n, vector<char>(n));
        ll ans = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> v[i][j];
 
        ll m = n - 1;
        for (i = 0; i < n / 2; i++)
        {
            for (j = i; j < (i + m); j++)
            {
                ll x = 0, y = n - 1 - i;
                x += (v[i][j] == '1');
                x += (v[j][y] == '1'); //
                x += (v[y][y - (j - i)] == '1');
                x += (v[y - (j - i)][i] == '1'); //
 
                ans += min(x, 4 - x);
            }
            m -= 2;
        }
        cout << ans << endl;
    }
    return 0;
}