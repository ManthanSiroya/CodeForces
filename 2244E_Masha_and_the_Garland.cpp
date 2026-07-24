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
 
void solve()
{
    ll n,q;
    cin>>n>>q;
    string s; cin>>s;
    ll x=(s[0]-'0'),a=0,b=0,c=0,d=0,m=1;
    vector<pair<ll,ll>> v,vv;
    fr(i,1,n){
        ll y=s[i]-'0';
        if(y!=x) x=(x^1);
        elif(m) {
            a=i;
            d=i-1;
            m=0;
            vv.push_back({c,d});
        }
        else {
            b=i-1;
            c=i;
            m=1;
            v.push_back({a,b});
        }
    }
    if(!m) v.push_back({a,n-1});
    else vv.push_back({c,n-1});
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll cnt1=0,cnt2=0,n1=v.size(),n2=vv.size();
        // Binary search for lowerbound, upperbound for both v,vv; 
        ll lo=0, hi=n1-1, left=n1, right=-1;
        //>=(l-1) for v
        while (lo <= hi) {
            ll mid=(lo+hi)/2;
            if (v[mid].second>=(l-1)){
                left=mid;
                hi=mid-1;
            } else lo=mid+1;
        }
        //<=(r-1) for v
        lo=0, hi=n1-1, right=-1;
        while (lo<=hi) {
            int mid=(lo+hi)/2;
            if (v[mid].first<=(r-1)) {
                right=mid;
                lo=mid+1;
            } else hi=mid-1;
        }
        // cnt1
        if (left<=right) cnt1=right-left+1;
 
        lo=0, hi=n2-1, left=n2, right=-1;
        //>=(l-1) for vv
        while (lo <= hi) {
            ll mid=(lo+hi)/2;
            if (vv[mid].second>=(l-1)){
                left=mid;
                hi=mid-1;
            } else lo=mid+1;
        }
        //<=(r-1) for vv
        lo=0, hi=n2-1, right=-1;
        while (lo<=hi) {
            int mid=(lo+hi)/2;
            if (vv[mid].first<=(r-1)) {
                right=mid;
                lo=mid+1;
            } else hi=mid-1;
        }
        // cnt2
        if (left<=right) cnt2=right-left+1;
 
        // for(auto p:v){
        //     if(((l-1)<=p.first && (r-1)>=p.second) || ((l-1)<=p.first && (r-1)>=p.first) || ((l-1)<=p.second && (r-1)>=p.second)) cnt1++;
        // }
        // for(auto p:vv){
        //     if(((l-1)<=p.first && (r-1)>=p.second) || ((l-1)<=p.first && (r-1)>=p.first) || ((l-1)<=p.second && (r-1)>=p.second)) cnt2++;
        // }
        if(min(cnt1,cnt2)<=k) cout<<"YES\n";
        else cout<<"NO\n";   
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