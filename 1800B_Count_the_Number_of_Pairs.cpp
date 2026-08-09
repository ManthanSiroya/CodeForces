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
    ll n,k;
    cin>>n>>k;
    string s; cin>>s;
    vector<ll> l(26,0),u(26,0);
    fr(i,0,n) {
        if (islower(s[i])) l[s[i]-'a']++;
        else u[s[i]-'A']++;
    }
    ll ans = 0;
    fr(i,0,26) {
        ll x=min(l[i],u[i]),y=abs(l[i]-u[i]); ans+=x;
        ll z=y/2;
        ans+= min(z,k);
        k-=min(z,k);
    }
    cout<<ans <<'\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll T; cin >> T;
    while (T--)
    solve();
    return 0;
}