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
 
const ll MOD=998244353;
 
void solve()
{
    ll n;
    cin>>n;
    string s; cin>>s;
    ll cnt1=0;
    fr(j,0,2){
        bool a=true;
        for(ll i=0; i<n ;i+=2){
            ll y=(j+i/2)%2;
            if(s[i]!='?' && (s[i]-'0')!= y) {
                a=false;
                break;
            }
        }
        if(a) cnt1++;
    }
    ll cnt2=0;
    fr(j,0,2){
        bool a=true;
        for(ll i=1; i<n ;i+=2){
            ll y=(j+i/2)%2;
            if (s[i]!='?' && (s[i]-'0')!= y) {
                a=false;
                break;
            }
        }
        if(a) cnt2++;
    }
    cout<<(cnt1*cnt2)%MOD<<"\n";
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