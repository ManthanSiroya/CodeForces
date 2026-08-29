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
    vector<ll> v(n);
    map<ll,ll> freq;
    ll x=0,ans=n;
    fr(i,0,n) {
        cin>>v[i];
        freq[v[i]]++;
    }
    vector<ll> sum(m+2,0);
    for(auto p:freq){
        sum[p.first]=p.second;
    }
    frr(i,1,m+1) sum[i]+=sum[i+1];
    fr(i,0,n){
        if(!(v[i]%2)){
            x=v[i]/2;
            ans=max(ans,freq[x]+(freq[v[i]]*2)+(sum[x+1]-freq[v[i]]));
        }
    }
    cout<<(ans)<<'\n';
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