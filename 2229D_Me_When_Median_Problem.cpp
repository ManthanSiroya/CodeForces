// Winners never Quit!
#include <bits/stdc++.h> // Problem - 
using namespace std;
 
#define ll long long
#define pr pair<ll, ll>
#define pb push_back
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
    vector<ll> a(n),b(n);
    fr(i,0,n) cin>>a[i];
    fr(i,0,n) cin>>b[i];
    ll ans=1,l=1,r=2*n;
    while(l<=r){
        ll mid=(l+r)/2;
        ll lar=0,sml=0,x=1;
        fr(i,0,n){
            if(a[i]>=mid && b[i]>=mid){
                x=1;
                lar++;
            }
            elif(x && a[i]<mid && b[i]<mid){
                sml++;
                x=0;
            }
        }
        if(lar > sml){
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;
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