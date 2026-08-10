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
 
bool works(const vector<long long>& w, long long k) {
    ll n=w.size();
    for (auto x: w) if (x==k) return false;
    if (n==1) return false;
    if (!(w[1] < k)) return false;
    if (!(w[n-2] > k)) return false;
    fr(i,1,n-1) {
        bool l=(w[i-1]>k),r=(w[i+1]<k);
        if (l==r) return false;
    }
    return true;
}
 
void solve()
{
    ll n;
    cin>>n;
    vector<ll> w(n);
    fr(i,0,n) cin>>w[i];
    bool ans=false;
    vector<ll> v;
    v.pb(0);
    for (auto x:w) {
        v.pb(x); v.pb(x + 1);
    }
    ll mx=1;
    fr(i,0,n) mx=max(mx,w[i]);
    v.pb(mx);
    for (auto k:v) {
        if(works(w,k)) {
            ans=true;
            break;
        }
    }
    cout<<(ans ? "YES\n":"NO\n");
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