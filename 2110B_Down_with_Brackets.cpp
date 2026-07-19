// Winners never Quit!
#include <bits/stdc++.h> // Problem - 2110B
using namespace std;
 
#define ll long long
#define pr pair<ll, ll>
#define pb push_back
#define fr(i, a, n) for (ll i = a; i < n; i++)
#define frr(i, a, n) for (ll i = n - 1; i >= a; i--)
#define elif else if
 
bool isprime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
 
ll pow(ll a, ll b) // O(log(b))
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
 
void solve()
{
    string s;
    cin >> s;
    ll a = 0;
    bool ans = false;
    for (ll i = 0; i + 1 < s.size(); i++)
    {
        if (s[i] == '(') a++;
        else a--;
        if (a == 0)
        {
            ans = true;
            break;
        }
    }
    if(ans) cout<<"YES\n";
    else cout <<"NO\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}