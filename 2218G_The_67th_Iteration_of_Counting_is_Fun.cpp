// Winners never Quit!
#include <bits/stdc++.h> // Problem - 2218G
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
    ll n,m;
    cin>>n>>m;
    vector<ll> b(n),sum(n);
    unordered_map<ll,ll> freq;
    fr(i,0,n) {
        cin>>b[i];
        freq[b[i]]++;
    }
    sum[0]=freq[0];
    fr(i,1,n) sum[i]=sum[i-1]+freq[i];
    ll x=0,ans=1;
 
    if((n > 1) && (b[1] < b[0]) && (b[0] != 0)){
        if(b[1]==b[0]-1) ans=(ans*sum[b[1]])%676767677;
        else ans=(ans*(sum[b[0]-1]-sum[b[0]-2]))%676767677;
    }
    elif((n > 1) && (b[1] >= b[0]) && (b[0] != 0)) x=1;
 
    if(n > 1 && b[n-1] > b[n-2] && b[n-1] != 0){
        if(b[n-2]==b[n-1]-1) ans=(ans*sum[b[n-2]])%676767677;
        else ans=(ans*(sum[b[n-1]-1]-sum[b[n-1]-2]))%676767677;
    }
    elif(n > 1 && b[n-1] <= b[n-2]&& b[n-1] != 0) x=1;
 
    fr(i,1,n-1){
        if(b[i] == 0) continue;
        if(b[i] <= min(b[i-1],b[i+1])){
            x=1;
            break;
        }
        else{
            if(min(b[i-1],b[i+1]) < (b[i]-1)) ans = (ans*(sum[b[i]-1] - sum[b[i]-2]))%676767677;
            elif(min(b[i-1],b[i+1]) == (b[i]-1)) ans = (ans*(sum[b[i]-1]))%676767677;
        }
    }
    if(n == 1){
        if(b[0] == 0) ans=1;
        else ans=0;
    }
    if(x) cout<<"0\n";
    else cout<<(ans%676767677)<<endl;
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