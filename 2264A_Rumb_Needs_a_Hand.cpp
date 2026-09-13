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
    int n;
    cin>>n;
    vector<ll> a(n);
    fr(i,0,n) cin>>a[i];
    bool x=true;
    fr(i,0,n){
        if(a[i]==i+1) continue;
        else if(a[a[i]-1]==i+1) continue;
        else{
            x=false;
        } 
    }
    if(!x) cout<<"NO\n";     
    else {
        int p=-1;
        fr(i,0,n){
            if(a[i]!=i+1)
            {
                p=a[i];
                break;
            }
        }
        if(p==-1) cout<<"YES"<<endl;
        else{
            x=true;
            fr(i,p,n){
                if(a[i]!=i+1)
                {
                    x=false;
                    break;
                }
            }
            if(x) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
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