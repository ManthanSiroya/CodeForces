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
 
ll isfair(ll n){
    string s=to_string(n);
    ll ans=1,x=0;
    fr(i,0,s.size()){
        x=s[i]-'0';
        if(x==0) continue;
        elif(n%x!=0){
            ans=0;
            break;
        }
    }
    return ans;
}
 
void solve()
{
    ll n;
    cin>>n;
    ll i=0;
    for(i=n;i<1000000000000000000;i++){
        if(isfair(i)) break;
    }
    cout<<i<<endl;
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