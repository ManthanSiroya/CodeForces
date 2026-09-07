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
    vector<ll> v(n), ans(n+1,0);
    fr(i,0,n) cin>>v[i];
    fr(i,0,n){
        if(v[i]==-1) continue;
        ll l=max(0LL,i-v[i]+1);
        ll r=min(n-1,i+v[i]-1);
 
        if(l<=r){
            ans[l]++;
            ans[r+1]--;
        }
    }
    string a;
    ll cnt=0,one=0;
    fr(i,0,n){
        cnt+=ans[i];
        if(cnt==0){
            a+='1';
            one++;
        }
        else a+='0';
    }
    if(!one){
        cout<<"-1\n";
        return;
    }
    ll x=1;
    fr(i,0,n){
        if(v[i]==-1) continue;
        ll y=0;
        if(i-v[i]>=0 && a[i-v[i]]=='1') y=1;
        if(i+v[i]<n && a[i+v[i]]=='1') y=1;
 
        if(!y){
            x=0;
            break;
        }
    }
    if(x) cout<<a<<'\n';
    else cout<<"-1\n";
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