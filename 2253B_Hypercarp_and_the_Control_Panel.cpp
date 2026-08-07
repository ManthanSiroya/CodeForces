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
    ll n;
    cin>>n;
    vector<ll> v(n);
    fr(i,0,n) cin>>v[i];
    vector<pair<ll,ll>> ans;
    ans.pb({v[0],1});
    fr(i,1,n){
        if(v[i]==v[i-1]) ans.back().second++;
        else ans.pb({v[i],1});
    }
    ll s=0,x=ans.size();
    fr(i,0,ans.size()-1){
        if(ans[i].second>=2 && ans[i+1].second>=2){
            x+=2; s=1; break;
        }
    }
    fr(i,0,ans.size()){
        if(s) break;
        if(ans[i].second>=2){
            if(i+1<ans.size() && (((i+2)>=ans.size()) || ans[i].first!=ans[i+2].first)){
                x+=1; s=1; break;
            }
            elif((i>=1) && ((i-2<0) || ans[i].first!=ans[i-2].first)){
                x+=1; s=1; break;
            }
        }
    }
    cout<<x<<endl;
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