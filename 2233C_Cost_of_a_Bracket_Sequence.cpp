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
 
// dp[i][s] = min no of brackets required to delete <=k till index i to get ans string s 
 
void solve()
{
    ll n,k;
    cin>>n>>k;
    string s;cin>>s;
    ll open=0,close=0;
    fr(i,0,n){
        if(s[i]=='(') {
            open++;
        }
        else{
            close++;
        }
    }
    string ans;
    fr(i,0,n) ans+="0";
    ll m=LLONG_MAX;
    fr(i,0,k+1){
        ll op=i,cl=k-i;
        string ss;
        fr(j,0,n) ss+="0";
        fr(j,0,n){
            if(op>0 && s[j]=='('){
                ss[j]='1';
                op--;
            }
        }
        frr(j,0,n){
            if(cl>0 && s[j]==')'){
                ss[j]='1';
                cl--;
            }
        }
        ll o=max(open-op,0LL),c=max(0LL,close-cl);
        ll cnt=0,x=0;
        fr(j,0,n){
            if(ss[j]=='1') continue;
            if(s[j]=='(') cnt++;
            else {
                if(cnt>0){
                    x++;
                    cnt--;
                }
            }
        }
        if(x<m){
            m=x;
            ans=ss;
        }
    }
    cout<<ans<<'\n';
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