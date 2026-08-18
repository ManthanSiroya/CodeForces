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
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    map<ll,ll> freq;
    fr(i,0,n) {
        cin>>v[i];
        freq[v[i]]++;
    }
    ll ans;
    fr(i,0,n){  
        if(freq[i]>1){
            freq[i+x]+=freq[i]-1;
            freq[i]=1;
        }
        elif(freq[i]==1) continue;
        else {
            cout<<i<<endl;
            return;
        }
    }
    cout<<n<<endl;
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