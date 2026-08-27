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
    ll n,k,a,b, c=LLONG_MAX, d=LLONG_MAX;
    cin>>n>>k>>a>>b;
    vector<pair<ll,ll>> v(n);
    fr(i,0,n) cin>>v[i].first>>v[i].second;
    a--; b--;
    pair<ll,ll> x={LLONG_MAX,LLONG_MAX}, y={LLONG_MAX,LLONG_MAX};
    fr(i,0,k){
        if((abs(v[a].first-v[i].first) + abs(v[a].second-v[i].second)) < d){
            d=(abs(v[a].first-v[i].first) + abs(v[a].second-v[i].second));
            x.first=v[i].first;
            x.second=v[i].second;
        }
 
        if((abs(v[b].first-v[i].first) + abs(v[b].second-v[i].second)) < c){
            c=(abs(v[b].first-v[i].first) + abs(v[b].second-v[i].second));
            y.first=v[i].first;
            y.second=v[i].second;
        }
    }
 
    ll ans1=(k!=0)?(c+d):LLONG_MAX;
    ll ans2=abs(v[a].first-v[b].first)+abs(v[a].second-v[b].second);
    cout<<min(ans1,ans2)<<endl;
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