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
 
bool comparator(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.second<p2.second) return true;
    else return false;
}
 
void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>> a(n),b(n);
    fr(i,0,n) {
        cin>>a[i].first;
        a[i].second=i;
    }
    b=a;
    ranges::sort(a,greater<>());
    ll x=1,y=0,ans=0;
    fr(i,0,n){
        if((1^y)) a[i].first=x;
        else a[i].first=((-1)*x);
 
        if((i%2)) x++;
        y^=1;
    }
    ranges::sort(a,comparator);
    fr(i,0,n) ans+=(2*(abs(a[i].first))*b[i].first);
    cout<<ans<<endl;
    cout<<"0 ";
    for (ll i = 0; i < n; i++){
        cout << a[i].first << " ";
    }
    cout << endl;
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