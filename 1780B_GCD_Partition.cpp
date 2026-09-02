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
    vector<ll> v(n);
    ll sum=0,sum1=0,ans=0;
    fr(i,0,n) {
        cin>>v[i];
        sum+=v[i];
    }
    fr(i,0,n-1){
        sum1+=v[i];
        ans=max(ans,gcd(sum1,sum));
    }
    // vector<ll> div;
    // for(ll i=2;i*i<=sum;i++){
    //     if(sum%i==0){
    //         div.pb(i);
    //         if(i!=(sum/i)) div.pb(sum/i);
    //     }
    // }
    // ll ans=1;
    // for(auto p:div){
    //     ll sum1=0,x=0;
    //     fr(i,0,n){
    //         sum1+=v[i];
    //         if(sum1%p==0) {
    //             sum1=0;
    //             x++;
    //         }
    //     }
    //     if(sum1==0 && x>1) ans=max(ans,p);
    // }
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