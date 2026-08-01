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
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    vector<pair<ll,ll>> ans(m);
    fr(i,0,n) cin>>a[i];
    fr(i,0,m) cin>>b[i];
    if(2*m > n){
        cout<<"NO\n";
        return;
    }
    sort(ran(a));
    sort(ran(b));
    fr(i,0,m){
        ans[i].first=a[i];
    }
    ll x=0,y=n-1;
    frr(i,0,m){
        ans[i].second=a[y];
        y--;
    }
    fr(i,0,m){
        if(b[i] < ans[i].first || b[i] > ans[i].second){
            x=1;
            break;
        }
    }
    if(x) cout<<"NO\n";
    else cout<<"YES\n";
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