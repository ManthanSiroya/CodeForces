// Winners never Quit!
#include <bits/stdc++.h> // Problem - 
using namespace std;
 
#define ll long long
#define pr pair<ll, ll>
#define pb push_back
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
    ll w,h,k,ans=0;
    cin>>w>>h;
    cin>>k;
    vector<ll> a(k);
    fr(i,0,k) cin>>a[i];
    ans=max(ans,abs((a[0]-a[k-1])*(h)));
    cin>>k;
    vector<ll> b(k);
    fr(i,0,k) cin>>b[i];
    ans=max(ans,abs((b[0]-b[k-1])*(h)));
    cin>>k;
    vector<ll> c(k);
    fr(i,0,k) cin>>c[i];
    ans=max(ans,abs((c[0]-c[k-1])*(w)));
    cin>>k;
    vector<ll> d(k);
    fr(i,0,k) cin>>d[i];
    ans=max(ans,abs((d[0]-d[k-1])*(w)));
    cout<<ans<<endl;
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