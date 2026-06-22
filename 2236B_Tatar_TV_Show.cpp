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
        ll n, k, i, j, cnt = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ans = true;
        for (i = 0; i < k; i++)
        {
            for (j = i; j < n; j += k)
            {
                if (s[j] == '1')
                    cnt++;
            }
            if (cnt % 2 == 1)
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}