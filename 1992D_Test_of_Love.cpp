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
    ll n,m,k;
    cin>>n>>m>>k;
    string s; cin>>s;
    ll x=0,cnt=0,i=-1;
    while(i<n){
        if (i==-1 || s[i]=='L') {
            x=0;
            for(ll j=min(n,i+m);j>i;j--){
                if(j==n || s[j]=='L') {
                    i=j; x = true;
                    break;
                }
            }
            if(!x) i+=m;
        }
        elif (s[i]=='W') {
            cnt++;
            i++;
        } 
        elif (s[i]=='C') {
            cout<<"NO\n";
            return;
        }
    }
    if(cnt>k) cout<<"NO\n";
    else cout<<"YES\n";
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