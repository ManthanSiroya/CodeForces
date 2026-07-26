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
    vector<pair<ll,ll>> v(n);
    vector<ll> sum(n),ans(n);
 
    fr(i,0,n) {
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(ran(v));
    sum[0]=v[0].first;
    fr(i,1,n) sum[i]=sum[i-1]+v[i].first;
 
    ll x=0,ans1=0,y=0;
    fr(i,0,n){
        x=i;
        ans1=i;
        while(x<n){
            pair<ll,ll> z={sum[x]+1,LLONG_MIN};
            y=lower_bound(ran(v),z)-v.begin(); 
            y--;
            if(y==x) break;
            ans1+=y-x;
            x=y;
        }   
        ans[v[i].second]=ans1;
    }
    fr(i,0,n) cout<<ans[i]<<" ";
    cout << endl;
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