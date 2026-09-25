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
    vector<ll> v(n),div;
    map<ll,ll> freq;
    fr(i,0,n) {
        cin>>v[i];
        freq[v[i]]++;
    }
    ll x=m;
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            div.pb(i);
            while (x%i == 0) {
                x/=i;
            }
        }
    }
    if(x>1) div.pb(x);
 
    ll mx=0;
    for (ll p:div) {
        ll y=0;
        fr(i,0,n){
            if(v[i]%p==0) {
                y+=v[i];
            }
        }
        mx=max(mx,y);
    }
    cout<<mx<<'\n';
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