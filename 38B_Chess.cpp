#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string a, b;
    cin >> a >> b;
    set<pair<ll, ll>> s;
    s.insert({(a[0] + 1 - 'a'), a[1] - '0'});
    s.insert({(b[0] + 1 - 'a'), b[1] - '0'});
    ll x1 = a[0] + 1 - 'a', y1 = a[1] - '0';
    ll x2 = b[0] + 1 - 'a', y2 = b[1] - '0';
    for (ll i = 1; i <= 8; i++)
    {
        s.insert({x1, i});
        s.insert({i, y1});
    }
    s.insert({x2 + 2, y2 + 1});
    s.insert({x2 + 2, y2 - 1});
    s.insert({x2 - 2, y2 + 1});
    s.insert({x2 - 2, y2 - 1});
    s.insert({x2 + 1, y2 + 2});
    s.insert({x2 + 1, y2 - 2});
    s.insert({x2 - 1, y2 + 2});
    s.insert({x2 - 1, y2 - 2});
 
    s.insert({x1 + 2, y1 + 1});
    s.insert({x1 + 2, y1 - 1});
    s.insert({x1 - 2, y1 + 1});
    s.insert({x1 - 2, y1 - 1});
    s.insert({x1 + 1, y1 + 2});
    s.insert({x1 + 1, y1 - 2});
    s.insert({x1 - 1, y1 + 2});
    s.insert({x1 - 1, y1 - 2});
 
    ll ans = 0;
    for (auto p : s)
    {
        if (1 <= p.first && p.first <= 8 && 1 <= p.second && p.second <= 8)
            ans++;
    }
    cout << (64 - ans) << endl;
    return 0;
}