#include <bits/stdc++.h> //Problem-1676D
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
        ll n, m, i, j, ans = 0;
        cin >> n >> m;
        vector<vector<ll>> v(n, vector<ll>(m));
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> v[i][j];
 
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                ll x = 1, y = 1, sum = v[i][j];
                while ((i + x) <= (n - 1) && (j + y) <= (m - 1))
                {
                    sum += v[i + x][j + y];
                    x++;
                    y++;
                }
                x = 1, y = 1;
                while ((i - x) >= 0 && (j + y) <= (m - 1))
                {
                    sum += v[i - x][j + y];
                    x++;
                    y++;
                }
                x = 1, y = 1;
                while ((i + x) <= (n - 1) && (j - y) >= 0)
                {
                    sum += v[i + x][j - y];
                    x++;
                    y++;
                }
                x = 1, y = 1;
                while ((i - x) >= 0 && (j - y) >= 0)
                {
                    sum += v[i - x][j - y];
                    x++;
                    y++;
                }
                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}