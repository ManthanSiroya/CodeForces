// Winners never Quit!
#include <bits/stdc++.h> // Problem - 
using namespace std;
 
#define ll long long
#define pr pair<ll, ll>
#define pb push_back
#define ran(a) a.begin(), a.end()
#define fr(i, a, n) for (ll i = a; i < n; i++)
#define frr(i, a, n) for (ll i = n - 1; i >= a; i--)
#define elif else if
 
bool isprime(ll n)
{
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
 
ll pow(ll a, ll b) // O(log(b))
{ 
    ll res = 1;
    while (b)
    {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
 
void solve()
{
    ll b,k;
    cin>>b>>k;
    vector<ll> a(k);
    fr(i,0,k) cin>>a[i];
    if (b%2==0) cout<<(a[k-1]%2==0 ? "even":"odd");
    else {
        ll sum = 0;
        fr(i,0,k) sum+=a[i];
        cout<<(sum%2==0 ? "even":"odd");
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // ll T; cin >> T;
    // while (T--)
    solve();
    return 0;
}