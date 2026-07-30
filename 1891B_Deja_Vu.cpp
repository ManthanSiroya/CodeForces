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
 
ll power(ll a, ll b) // O(log(b))
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
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n),b(q);
    vector<pair<ll,ll>> ans;
    fr(i,0,n) cin>>a[i];
    fr(i,0,q) cin>>b[i];
    ll mx=0,x=0;
    fr(i,1,30){
        fr(j,0,n){
            if(a[j]%(power(2,i))==0){
                mx=i;
                break;
            }
            if(j==n-1) {
                x=1;
                break;
            }
        }
        if(x) break;
    }
    ll y=0;
    fr(i,0,q){
        if(b[i]>mx) continue;
        elif(b[i]<mx){
            y=0;
            mx=b[i];
        }
        if(!y) {
            ans.pb({mx,0}); y=1;
        } 
    }
    if (ans.size()>0) ans[(ans.size()-1)].second=power(2,ans[(ans.size()-1)].first-1);
    frr(i,0,(ans.size()-1)){
        (ans[i].second)=(ans[i+1].second)+power(2,(ans[i].first)-1);
    }
    fr(i,0,n){
        for(auto p:ans){
            if(a[i]%(power(2,p.first))==0) a[i]+=p.second;
        }
    }
    fr(i,0,n) cout<<a[i]<<" ";
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