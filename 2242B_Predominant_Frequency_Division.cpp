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
    ll n;
    cin>>n;
    vector<ll> v(n);
    fr(i,0,n) cin>>v[i];
    ll cnt1=0,cnt2=0,cnt3=0,ans=0,x=n-2;
    fr(i,0,n-1){
        if(v[i]==2)
            cnt2++;
        elif(v[i]==1)
            cnt1++;
        else
            cnt3++;
 
        if(cnt1>=(cnt2+cnt3)){
            x=i;
        }
        if(v[x+1]==3 && cnt1>(cnt2+cnt3)) continue;
        elif(x!=(n-2)) break;
    }
    cnt1=0,cnt2=0,cnt3=0;
    fr(i,(x+1),n-1){
        if(v[i]==2)
            cnt2++;
        elif(v[i]==1)
            cnt1++;
        else
            cnt3++;
 
        if((cnt1+cnt2)>=cnt3){
            ans=1;
            break;
        }
    }
    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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