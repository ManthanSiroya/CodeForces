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
    fr(i,0,n) cin>>v[i];
    ll sum=0,ans=LLONG_MIN,x=(abs(v[0])%2),y=0;
    fr(i,0,n) {
        if(y){
            x=abs(v[i])%2;
            sum=v[i];
            if(sum<0) y=1;
            else y=0;
        }
        elif((sum+v[i])<0){
            sum=v[i];
            if(sum<0) y=1;
            else y=0;
        }
        elif(abs(v[i])%2!=x){
            x^=1;
            sum+=v[i];
        }
        else{
            sum=v[i];
            x=abs(v[i])%2;
            if(sum<0) y=1;
            else y=0;
        }
        ans=max(ans,sum);
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