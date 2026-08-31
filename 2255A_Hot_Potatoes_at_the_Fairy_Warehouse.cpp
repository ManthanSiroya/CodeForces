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
 
// 10011110101011
// 1 0 1 1 1 1 1
// 4+3
void solve()
{
    ll n,k;
    cin>>n>>k;
    string s; cin>>s;
    ll cnt=0,x=0;
    fr(i,0,(2*n)-1){
        if(!(i%2) && s[i]=='1' && s[i+1]=='0') cnt++;
        elif((i%2) && s[i]=='1' && s[i+1]=='1') cnt++;
        if(s[i]=='1') x++;
    }
    cnt+=(s[(2*n)-1]=='1' && s[0]=='1');
    x+=(s[(2*n)-1]=='1');
    cout<<cnt<<" "<<x-cnt<<'\n';
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