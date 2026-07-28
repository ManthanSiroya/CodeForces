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
    ll n;
    cin>>n;
    vector<ll> v(n),div,sum(n);
    fr(i,0,n) cin>>v[i];
    div.pb(1);
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            div.pb(i);
            if(i!=(n/i)) div.pb(n/i);
        }
    }
    sum[0]=v[0];
    fr(i,1,n) sum[i]=v[i]+sum[i-1];
    ll ans=0,mx=0,mn=LLONG_MAX;
    for(auto p:div){
        mx=0,mn=LLONG_MAX;
        for(ll i=0;i<n;i+=p){
            if(i>0) {
                mx=max(mx,(sum[i+p-1]-sum[i-1]));
                mn=min(mn,(sum[i+p-1]-sum[i-1]));
            }
            else{
                mx=max(mx,sum[p-1]);
                mn=min(mn,sum[p-1]);
            }
        }
        ans=max(ans,(mx-mn));
    }
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