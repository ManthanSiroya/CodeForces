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
    ll a,b,x=0;
    cin>>a>>b;
    cout<<(a+b)<<" ";
    vector<ll> bit(30);
    bit[0]=a+b;
    fr(i,0,29){
        x=bit[i];
        bit[i]=x%2;
        bit[i+1]=x/2;
    }
    ll ans=0;
    frr(i,0,30){
        if(bit[i] && (ans+pow(2,i))<=(a)) ans+=pow(2,i);
    }
    cout<<(a-ans)<<'\n';
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