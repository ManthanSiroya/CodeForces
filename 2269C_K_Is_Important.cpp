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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    fr(i,0,n) cin>>v[i];
    ll i=k-1,j=n-k,ans=0,x=0;
    while(i<=j){
        x++;
        if(i==j){
            ans+=v[i];
            i=n-k+1;
            j=k-2;
            break;
        }
        if(v[i]>=v[j]) {
            ans+=v[i];
            i++;
        }
        else{
            ans+=v[j];
            j--;
        }
    }
    while(i<n && j>=0 && (n-x)>=k) {
        if(v[i]>=v[j]){
            ans+=v[i];
            i++;
            j--;
        }
        else{
            ans+=v[j];
            j--;
            i++;
        }
        x++;
    }
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