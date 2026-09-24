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
    ll n, k;
    cin >> n >> k;
    if (k < n || k > 2 * n - 1) {
        cout << -1 << '\n';
        return;
    }
    vector<vector<ll>> a(n, vector<ll>(n, 0));
    ll num = 1;
    ll m = 2 * n - k;
    fr(i,0,m){
        a[i][i] = num++;
    }
    fr(j,m,n){
        a[m - 1][j] = num++;
    }
    fr(i,m,n){
        a[i][n - 1] = num++;
    }
    fr(i,0,n){
        fr(j,0,n){
            if (a[i][j] == 0) {
                a[i][j] = num++;
            }
        }
    }
    fr(i,0,n){
        fr(j,0,n){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
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