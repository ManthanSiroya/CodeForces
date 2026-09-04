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
 
// 1 1 1 1 0 0 0 0
// 0 1 1 0 0 1 0 1
 
void solve()
{
    ll n,ans=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<ll> a1,a0;
    for(ll i=0;i<n;i+=2){
        if(a[i]!=b[i]){
            if(a[i]=='1') a1.pb(i);
            else a0.pb(i);
        }
    }
    if(a1.size()!=a0.size()){
        cout<<"-1\n";
        return;
    }
    fr(i,0,a1.size()) ans+=(abs(a1[i]-a0[i]))/2;
    a1.clear(); a0.clear();
    for(ll i=1;i<n;i+=2){
        if(a[i]!=b[i]){
            if(a[i]=='1') a1.pb(i);
            else a0.pb(i);
        }
    }
    if(a1.size()!=a0.size()){
        cout<<"-1\n";
        return;
    }
    fr(i,0,a1.size()) ans+=(abs(a1[i]-a0[i]))/2;
    cout<<ans<<'\n';
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