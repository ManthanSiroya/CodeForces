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
    ll n,q;
    cin>>n>>q;
    string s,t; cin>>s>>t;
    ll arr[n+1][4];
    fr(i,0,n+1){
        fr(j,0,4) arr[i][j]=0;
    }
    fr(i,1,n+1){
        arr[i][0]=arr[i-1][0];
        arr[i][1]=arr[i-1][1];
        arr[i][2]=arr[i-1][2];
        arr[i][3]=arr[i-1][3];
        if(s[i-1]=='0' && t[i-1]=='0') arr[i][0]++;
        elif(s[i-1]=='0' && t[i-1]=='1') arr[i][1]++;
        elif(s[i-1]=='1' && t[i-1]=='0') arr[i][2]++;
        else arr[i][3]++;
    }
    while(q--){
        ll a,b;
        cin>>a>>b;
        ll c00=arr[b][0]-arr[a-1][0],c01=arr[b][1]-arr[a-1][1],c10=arr[b][2]-arr[a-1][2],c11=arr[b][3]-arr[a-1][3];
        ll mn=LLONG_MAX;
        if(c10){
            if(c01){
                mn=min(c10,c01);
                c01-=mn;
                c10-=mn;
            }
        }
        if(c10>(c00+c11)){
            cout<<"NO\n";
            continue;
        }
        if(c01>(c00+c11)){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
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