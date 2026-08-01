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
    vector<ll> v(2*n);
    fr(i,0,2*n) cin>>v[i];
    vector<pair<ll,ll>> dis(n+1);
    fr(i,0,n+1){
        dis[i].first=-1;
    }
    fr(i,0,2*n){
        if(dis[v[i]].first==-1) dis[v[i]].first=i;
        else dis[v[i]].second=i;
    }
    vector<ll> dp(2*n,0);
    dp[0]=1;
    fr(i,1,2*n){
        ll x=dis[v[i]].first,y=dis[v[i]].second;
        dp[i]=dp[i-1]+1;
 
        if(y==i) {
            if(x>0) dp[i]=max(dp[i],(y-x+1)*(y-x+1)+dp[x-1]);
            else dp[i]=max(dp[i],(y-x+1)*(y-x+1));
        }
    }
    cout<<dp[(2*n)-1]<<endl;
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