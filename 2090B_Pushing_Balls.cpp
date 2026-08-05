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
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
 
ll pow(ll a, ll b) // O(log(b))
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
 
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<char>> dp(n, vector<char>(m,'0')), v(n, vector<char>(m));
    fr(i,0,n) fr(j,0,m) cin>>v[i][j];
    fr(i,0,n){
        fr(j,0,m){
            if (v[i][j]=='0')
                break;
            dp[i][j]=1;
        }
    }
    fr(j,0,m){
        fr(i,0,n){
            if (v[i][j]=='0')
                break;
            dp[i][j]=1;
        }
    }
    fr(i,0,n){
        fr(j,0,m){
            if (v[i][j]=='1' && dp[i][j]=='0')
            {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}