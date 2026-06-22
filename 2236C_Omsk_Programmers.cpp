#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x;
        cin >> a >> b >> x;
 
        vector<pair<long long, long long>> vm, vn;
 
        long long cur = a, cnt = 0;
        vm.push_back({cur, cnt});
        while (cur != 0)
        {
            cur /= x;
            cnt++;
            vm.push_back({cur, cnt});
        }
        cur = b;
        cnt = 0;
        vn.push_back({cur, cnt});
        while (cur != 0)
        {
            cur /= x;
            cnt++;
            vn.push_back({cur, cnt});
        }
 
        long long ans = LLONG_MAX;
        for (auto &m : vm)
        {
            for (auto &n : vn)
            {
                long long cost = m.second + n.second + abs(m.first - n.first);
                ans = min(ans, cost);
            }
        }
        cout << ans << endl;
    }
}