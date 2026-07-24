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
    vector<ll> v(n),dp(n+1,-1);
    ll mn=LLONG_MAX;
    unordered_map<ll,ll> freq;
    fr(i,0,n) {
        cin>>v[i];
        freq[v[i]]++;
    }
    fr(i,0,n){
        mn=LLONG_MAX;
        if(freq[i+1]>0) {
            dp[i+1]=1;
            continue;
        }
        for(ll j=2; j*j<=(i+1);j++){
            if((i+1)%j==0){
                if(dp[j]==-1 || dp[(i+1)/j]==-1) continue;
                mn=min(mn,(dp[j]+dp[(i+1)/j]));
            }
        }
        if(mn!=LLONG_MAX) dp[i+1]=mn;
    }
 
    fr(i,1,n+1) cout<<dp[i]<<" ";
    cout<<'\n';
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